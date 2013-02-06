<?php
/**
 * @file
 * information_guides.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function information_guides_taxonomy_default_vocabularies() {
  return array(
    'ig_subjects' => array(
      'name' => 'Information Guide Subjects',
      'machine_name' => 'ig_subjects',
      'description' => 'Information Guide Subjects',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-5',
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
