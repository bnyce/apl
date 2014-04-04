<?php
/**
 * @file
 * image_rotator.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function image_rotator_taxonomy_default_vocabularies() {
  return array(
    'library_hours' => array(
      'name' => 'Library Hours',
      'machine_name' => 'library_hours',
      'description' => 'The Schedule for a Physical Library, Bookstore, History Center, or Branch of the Austin Public Library',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '1',
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
    'library_location' => array(
      'name' => 'Library Location',
      'machine_name' => 'library_location',
      'description' => 'A Physical Library, History Center, Bookstore, or Branch of the Austin Public Library',
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
