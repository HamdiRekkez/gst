#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	setAttribute(Qt::WA_NativeWindow, true);
	gst_init(NULL, NULL);
	GstElement *pipeline = gst_pipeline_new("xvoverlay");
	GstElement *src = gst_element_factory_make("v4l2src", NULL);

	GstElement *upload = gst_element_factory_make("glupload", NULL);

	GstElement *glConvert = gst_element_factory_make("glcolorconvert", NULL);

	GstElement *lumaxpro = gst_element_factory_make("gleffects_heat", NULL);

	GstElement *sink = gst_element_factory_make("glimagesink", NULL);
	gst_bin_add_many(GST_BIN(pipeline), src, upload, glConvert, lumaxpro, sink, NULL);
	gst_element_link(src, sink);

	gst_video_overlay_set_window_handle(GST_VIDEO_OVERLAY(sink), this->winId());

	GstStateChangeReturn ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);



}

MainWindow::~MainWindow()
{
    delete ui;
}
