<?php
  class nossasp_contexts_search_results_condition extends context_condition {
    function condition_values() {
      return array(1 => t('Active'));
    }

    function editor_form($context = NULL) {
      $form = parent::editor_form($context);
      return $form;
    }

    function execute() {
      foreach (context_enabled_contexts() as $context) {
        $this->condition_met($context, $value);
      }
    }

  } 
