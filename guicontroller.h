/* Copyright © 2013 Paulo Roberto Urio <paulourio@gmail.com> */
#ifndef GUICONTROLLER_H_
#define GUICONTROLLER_H_

#include "./controller.h"
#include "./global.h"
#include "./guiview.h"

namespace acs {

/**
 * Abstract class for a controller.
 */
class GUIController: public Controller {
public:
	virtual ~GUIController() = default;

	GUIController();

	void Update(cv::Mat image);

	void Wait() const;

private:
	GUIView view_;

	DISALLOW_COPY_AND_ASSIGN(GUIController);
};

}  // namespace acs

#endif  // GUICONTROLLER_H_
