<?php
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>
<style>
  .vertical-tabs-list {
    list-style: none;
    padding: 0;
    margin: 0;
    border-radius: 4px;
  }

  .vertical-tab-button {
    background-color: #ddd;
    padding: 1em;
    cursor: pointer;
    color: #fff;
  }

  .vertical-tab-button:not(:last-child) {
    border-bottom: 1px solid #aaa;
  }

  .vertical-tab-button:first-child {
    border-top-left-radius: 2px;
    border-top-right-radius: 2px;
  }

  .vertical-tab-button:last-child {
    border-bottom-left-radius: 2px;
    border-bottom-right-radius: 2px;
  }

  .vertical-tab-button.active,
  .header-preview {
    background-color: #cc0000;
    border-bottom: 9px solid #F1BE48;
  }

  .vertical-tab-button .form-text {
    display: none;
    font-size: 14px;
    padding: 5px;
    border-radius: 2px;
    min-width: 300px;
  }

  .vertical-tab-button.active .form-text {
    display: block;
  }

  .vertical-tab-button.active .field-name {
    display: none;
  }

  .vertical-tab-button .field-container:not(:last-child) {
    margin-bottom: 1em;
  }

  .container-12 .grid-6 {
    width: calc(50% - 2em);
    float: left;
    padding: 1em;
  }

  .header-preview {
    padding: 1em;
    color: #fff;
    border-radius: 2px;
  }

  .header-preview .site-name-level-1,
  .field-department-name .field-name {
    margin-bottom: 0;
    font-weight: 500;
    font-size: 18px;
    text-decoration: none;
    line-height: 16px;
    padding-top: 7px;
    font-family: Helvetica neue, sans-serif;
    letter-spacing: 0;
    margin-top: 0;
  }

  .header-preview .site-name-level-2,
  .field-laboratory-name .field-name {
    font-size: 22px;
    margin-top: 10px;
    margin-bottom: 0;
    line-height: 16px;
    font-weight: 400;
    font-family: Helvetica neue, sans-serif;
  }
</style>
<div<?php print $attributes; ?>>
  <div class="container-12 clearfix">
  	<div class="grid-6 vertical-tabs clearfix">
  		<ul class="vertical-tabs-list">
  			<li class="vertical-tab-button active" data-img="true" data-dname="true" data-lname="true">
  				<div>
            <img src="../../../sites/all/themes/suitcase_interim/images/sprite.png" height="24px">
            <div class="field-container field-department-name">
              <span class="field-name">Department of Examples</span>
              <input type="text" name="department-name" class="form-text" value="Department of Examples" placeholder="Enter Department Name">
            </div>
            <div class="field-container field-laboratory-name">
              <span class="field-name">Laboratory of Jane Doe</span>
              <input type="text" name="laboratory-name" class="form-text" value="Laboratory of Jane Doe" placeholder="Enter Laboratory Name">
            </div>
  				</div>
  			</li>
  			<li class="vertical-tab-button" data-img="true" data-dname="true" data-lname="false">
          <div>
            <img src="../../../sites/all/themes/suitcase_interim/images/sprite.png" height="24px">
            <div class="field-container field-department-name">
              <span class="field-name">Department of Examples</span>
              <input type="text" name="department-name" class="form-text" value="Department of Examples" placeholder="Enter Department Name">
            </div>
          </div>
  			</li>
  			<li class="vertical-tab-button" data-img="true" data-dname="false" data-lname="true">
          <div>
            <img src="../../../sites/all/themes/suitcase_interim/images/sprite.png" height="24px">
            <div class="field-container field-laboratory-name">
              <span class="field-name">Laboratory of Jane Doe</span>
              <input type="text" name="laboratory-name" class="form-text" value="Laboratory of Jane Doe" placeholder="Enter Laboratory Name">
            </div>
          </div>
  			</li>
  			<li class="vertical-tab-button" data-img="true" data-dname="false" data-lname="true">
          <div>
            <img src="../../../sites/all/themes/suitcase_interim/images/sprite.png" height="24px">
            <div class="field-container field-laboratory-name">
              <span class="field-name">Laboratory of Jane Doe</span>
              <input type="text" name="laboratory-name" class="form-text" value="Laboratory of Jane Doe" placeholder="Enter Laboratory Name">
            </div>
          </div>
  			</li>
  		</ul>
  	</div>
  	<div class="grid-6">
      <div class="header-preview">
    		<img src="../../../sites/all/themes/suitcase_interim/images/sprite.png" height="24px" class="header-img">
        <header class="header-text">
          <h1 class="site-name-level-1">Department of Examples</h1>
          <h2 class="site-name-level-2">Laboratory of Jane Doe</h2>
        </header>
      </div>
  	</div>
  </div>
  <script type="text/javascript">
    (function($) {
      var $headerImg = $('.header-preview .header-img'),
        $headerLevel1 = $('.header-preview .site-name-level-1'),
        $headerLevel2 = $('.header-preview .site-name-level-2');

      $('.vertical-tab-button').click(function() {
        $('.vertical-tab-button').removeClass('active');
        $(this).toggleClass('active');
        var d = $(this).data();
        console.log(d);
        if (d.img) $headerImg.show();
        else $headerImg.hide();
        if (d.dname) $headerLevel1.show();
        else $headerLevel1.hide();
        if (d.lname) $headerLevel2.show();
        else $headerLevel2.hide();
      });

      $('.field-department-name .form-text').bind("propertychange change click keyup input paste", function() {
      	$('.field-department-name .field-name').text($(this).val());
      	$('.field-department-name .form-text').val($(this).val());
        $headerLevel1.text($(this).val());
      });

      $('.field-laboratory-name .form-text').bind("propertychange change click keyup input paste", function() {
      	$('.field-laboratory-name .field-name').text($(this).val());
      	$('.field-laboratory-name .form-text').val($(this).val());
        $headerLevel2.text($(this).val());
      });
    })(jQuery)
  </script>
  <?php if (isset($page['content'])) : ?>
    <?php print render($page['content']); ?>
  <?php endif; ?>
</div>
