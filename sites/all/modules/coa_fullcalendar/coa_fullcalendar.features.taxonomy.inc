<?php
/**
 * @file
 * coa_fullcalendar.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function coa_fullcalendar_taxonomy_default_vocabularies() {
  return array(
    'calander_departments' => array(
      'name' => 'Calander Departments',
      'machine_name' => 'calander_departments',
      'description' => 'Calendar event depatment owners',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
