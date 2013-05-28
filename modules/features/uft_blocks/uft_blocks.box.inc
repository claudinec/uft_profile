<?php
/**
 * @file
 * uft_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function uft_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'indigenous_statement_box';
  $box->plugin_key = 'simple';
  $box->title = 'Statement of Commitment to Indigenous Peoples';
  $box->description = 'Indigenous Statement';
  $box->options = array(
    'body' => array(
      'value' => 'We acknowledge that:

- Indigenous peoples are the traditional owners and have been custodians of this land for thousands of years; in particular the Wurundjeri people are the traditional owners of the land on which the United Faculty of Theology is located

- European settlement has had a destructive and lasting effect on the lives and cultures of the Indigenous peoples

- It is of fundamental importance to this country that there be effective reconciliation between Indigenous and non-Indigenous peoples

We affirm that as the United Faculty of Theology, we share a common commitment to the Christian gospel which declares that in Jesus Christ, God has acted to reconcile the world and to unite people across all cultures. We are called and committed therefore to uphold the gospel of reconciliation and justice in our relationships with Indigenous peoples.

We therefore undertake to consider ways in which we can:

1. Support the public process of reconciliation and the claims of Indigenous peoples for justice in Australian society

2. Promote the study of the life, traditions and cultures of Indigenous peoples

3. Promote a deep understanding of the history of Australia since 1788, recognising the experience of Indigenous peoples and how they perceive this history

4. Encourage the growth of Indigenous ways of being church, welcoming the contributions which such a Christianity may make to the Australian church

5. Foster relations and encourage collaboration between the United Faculty of Theology and centres of Indigenous Theological Studies

6. Seek to offer support for Indigenous students to study theology including the provision of scholarships

7. Make public acknowledgment, on certain appropriate occasions, of the traditional ownership of the land by Indigenous peoples.

We undertake to review and monitor this statement of commitment and its implementation on an annual basis.

_As agreed by Senatus, 29 November 2004_',
      'format' => 'html',
    ),
    'additional_classes' => '',
  );
  $export['indigenous_statement_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'welcome';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Welcome';
  $box->options = array(
    'body' => array(
      'value' => '<p style="margin: 0px 0px 1em; padding: 0px 10px; color: rgb(45, 45, 45); font-family: helvetica, sans-serif; font-size: 14px; line-height: normal;">The United Faculty of Theology (UFT) is an ecumenical partnership of three theological colleges in Parkville, Melbourne, within&nbsp;<a class="ext" href="http://mcd.edu.au/" style="border-bottom-width: 1px; border-bottom-style: dotted; color: rgb(107, 147, 156);" target="_blank">MCD University of Divinity</a>&nbsp;(CRICOS Provider 01037A), Australia. Some students are in formation for ministry at Jesuit Theological College, the Uniting Church Theological College, or Trinity College Theological School (Anglican). Others are undertaking professional development, writing a research thesis, pursuing their first tertiary degree, or fulfilling a passion for theological study.</p><p style="margin: 0px 0px 1em; padding: 0px 10px; color: rgb(45, 45, 45); font-family: helvetica, sans-serif; font-size: 14px; line-height: normal;">We offer courses and units in face-to-face lectures, by distance through&nbsp;<a class="ext" href="http://online.mcd.edu.au/" style="border-bottom-width: 1px; border-bottom-style: dotted; color: rgb(107, 147, 156);" target="_blank">Theology Online</a>, in intensive, weekend and evening classes. We invite you to join us.</p>',
      'format' => 'html',
    ),
  );
  $export['welcome'] = $box;

  return $export;
}
