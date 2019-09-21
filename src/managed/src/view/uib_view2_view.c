
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
		#include "g_inc_uib.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include "uib_app_manager.h"


/* event handler declarations */
void connection_view2_button1_onclicked(uib_view2_view_context*, Evas_Object*, void*);
void connection_view2_button2_onclicked(uib_view2_view_context*, Evas_Object*, void*);

uib_view_context* uib_view_view2_create(Evas_Object* parent, void* create_callback_param) {
	uib_view2_view_context* vc = calloc(1, sizeof(uib_view2_view_context));
	vc->parent = parent;
	vc->view_name = "view2";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->grid1) {
		vc->grid1= elm_grid_add(parent);
		vc->root_container = vc->grid1;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler
	evas_object_smart_callback_add(vc->button1, "clicked", (Evas_Smart_Cb)connection_view2_button1_onclicked, vc);

	evas_object_smart_callback_add(vc->button2, "clicked", (Evas_Smart_Cb)connection_view2_button2_onclicked, vc);



	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_view2_config_HD_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_view2_view_context* vc = (uib_view2_view_context*)uib_app_manager->find_view_context("view2");
	if(!vc) {
		return;
	}
	if(vc->grid1) {
		elm_grid_clear(vc->grid1, EINA_FALSE);
		evas_object_size_hint_align_set(vc->grid1, -1.0, -1.0);		evas_object_size_hint_weight_set(vc->grid1, 1.0, 1.0);		elm_grid_size_set(vc->grid1, 1000, 1000);
		if (!vc->button1) {
			vc->button1 = elm_button_add(vc->grid1);
		}
		if (vc->button1) {
			evas_object_size_hint_align_set(vc->button1, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->button1, 1.0, 1.0);			elm_object_text_set(vc->button1,_UIB_LOCALE("Previous View"));
			elm_object_style_set(vc->button1,"default");
			evas_object_show(vc->button1);
		}
		if (!vc->button2) {
			vc->button2 = elm_button_add(vc->grid1);
		}
		if (vc->button2) {
			evas_object_size_hint_align_set(vc->button2, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->button2, 1.0, 1.0);			elm_object_text_set(vc->button2,_UIB_LOCALE("Next View"));
			elm_object_style_set(vc->button2,"default");
			evas_object_show(vc->button2);
		}
		if (!vc->label1) {
			vc->label1 = elm_label_add(vc->grid1);
		}
		if(vc->label1) {
			evas_object_size_hint_align_set(vc->label1, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->label1, 1.0, 1.0);			elm_object_text_set(vc->label1,_UIB_LOCALE("Second View"));
			elm_label_line_wrap_set(vc->label1, (Elm_Wrap_Type)ELM_WRAP_NONE);
			elm_label_ellipsis_set(vc->label1, EINA_FALSE);
			evas_object_show(vc->label1);
		}
		elm_grid_pack(vc->grid1, vc->button1, 100, 350, 800, 80);		elm_grid_pack(vc->grid1, vc->button2, 100, 850, 800, 80);		elm_grid_pack(vc->grid1, vc->label1, 150, 50, 700, 80);		evas_object_show(vc->grid1);
	}
}

