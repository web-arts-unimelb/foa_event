<?php

// hook_form_alter
function foa_event_form_alter(&$form, &$form_state, $form_id) {
	//http://www.webomelette.com/theming-drupal-forms-custom-classes
	if($form_id == 'views_exposed_form') {
		$form['submit']['#attributes']['class'][] = 'foa-event-listing-submit';
	}
}
