<?php
/**
 * @file
 * front_page_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function front_page_news_taxonomy_default_vocabularies() {
  return array(
    'focus' => array(
      'name' => 'Focus',
      'machine_name' => 'focus',
      'description' => 'Used to categorize blog posts and other content',
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
