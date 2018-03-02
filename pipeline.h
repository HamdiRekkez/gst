// $Id$

/** @file
 * @brief
 *
 * @author Hamdi Rakkez.
 *
 */

#ifndef PIPELINE_H
#define PIPELINE_H

#include<gst/gst.h>
#include <gst/video/videooverlay.h>
#include <QMainWindow>

using namespace std;

class Pipeline
{

private:

	// The sink.
	GstElement *sink;

public:

	/**
	 * @brief Pipeline
	 * @param sink
	 */
	Pipeline();

	/**
	 * @brief Pipeline
	 * @param sink
	 */
	Pipeline(GstElement *sink);

	/**
	 *
	 */
	~Pipeline();

	/**
	 * @brief renderPipeline2Window
	 *
	 * @param windowID The rendering window ID.
	 */
	void renderPipeline2Window(WId windowID);
};

#endif // PIPELINE_H
