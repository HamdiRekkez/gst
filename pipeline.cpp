// $Id$

/** @file pipeline.cpp
 * @brief The pipeline implementation.
 *
 * @author Hamdi Rakkez.
 *
 */

#include "pipeline.h"

Pipeline::Pipeline()
{
	// Nothing to do;
}

Pipeline::Pipeline(GstElement *sink)
{
	this->sink = sink;
}

Pipeline::~Pipeline()
{
	delete sink;
}

void Pipeline::renderPipeline2Window(WId windowID)
{
	gst_video_overlay_set_window_handle(GST_VIDEO_OVERLAY(sink), windowID);
}
