<?php
/**
 * @file
 * meeting_rooms_2014.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function meeting_rooms_2014_taxonomy_default_vocabularies() {
  return array(
    'rooms' => array(
      'name' => 'Rooms',
      'machine_name' => 'rooms',
      'description' => 'Rooms that are available for reservation.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
