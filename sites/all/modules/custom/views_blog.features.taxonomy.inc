<?php
/**
 * @file
 * views_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function views_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_topics' => array(
      'name' => 'Blog Topics',
      'machine_name' => 'blog_topics',
      'description' => 'Broad Top Level Blogs that will be segregated into separate views',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-9',
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
    'book_list_categories' => array(
      'name' => 'Book List Categories',
      'machine_name' => 'book_list_categories',
      'description' => 'A way to categorize all book lists at the library',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-10',
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
