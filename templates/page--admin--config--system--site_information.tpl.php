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

  .vertical-tab-button .form-item {
    padding: 0;
  }

  .vertical-tab-button .form-item .description {
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

  .vertical-tab-button .form-item {
    display: none;
  }

  .vertical-tab-button.active .form-text {
    display: block;
  }

  .vertical-tab-button.active .field-name {
    display: none;
  }

  .vertical-tab-button.active .form-item {
    display: block;
  }

  .vertical-tab-button .field-container:not(:last-child) {
    margin-bottom: 1em;
  }

  .vertical-tab-button.active.changeable-image-file .change-me {
    display: none;
  }

  .container-12 .grid-6 {
    width: calc(50% - .5em);
    float: left;
    padding-right: 1em;
  }

  .container-12 .grid-6:last-child {
  	padding-right: 0;
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

  .header-preview .site-name-level-2>h2,
  .field-laboratory-name .field-name {
    font-size: 22px;
    margin-top: 10px;
    margin-bottom: 0;
    line-height: 16px;
    font-weight: 400;
    font-family: Helvetica neue, sans-serif;
  }

  .hr-preview {
    margin: 14px 0;
    border: 0;
    border-top: 1px solid rgba(255, 255, 255, 0.5);
    height: 0;
  }

  .vertical-tab-button.active .hr-preview,
  .header-preview .hr-preview {
    background-color: #cc0000;
  }

  .header-img {
    width: 375.5px;
    height: auto;
  }
</style>
<div<?php print $attributes; ?>>
  <?php $variables['suitcase_interim_wordmark_path'] = base_path() . drupal_get_path('theme', 'suitcase_interim') . '/images/sprite.png'; ?>
  <div class="container-12 clearfix">
  	<div class="grid-6 vertical-tabs clearfix">
  		<ul class="vertical-tabs-list">
  			<li class="vertical-tab-button <?php if ($form['site_information']['header_type']['#value'] == 1) print 'active'; ?>" data-img="true" data-dname="true" data-lname="true" data-type="1">
  				<div>
            <img src="<?php print $variables['suitcase_interim_wordmark_path']; ?>" height="24px">
            <div class="field-container field-department-name">
              <span class="field-name"><?php print $form['site_information']['site_name']['#value']; ?></span>
              <input type="text" name="department-name" class="form-text" value="<?php print $form['site_information']['site_name']['#value']; ?>" placeholder="Enter Department Name">
            </div>
            <hr class="hr-preview">
            <div class="field-container field-laboratory-name">
              <span class="field-name"><?php print $form['site_information']['site_slogan']['#value']; ?></span>
              <input type="text" name="laboratory-name" class="form-text" value="<?php print $form['site_information']['site_slogan']['#value']; ?>" placeholder="Enter Laboratory Name">
            </div>
  				</div>
  			</li>
  			<li class="vertical-tab-button <?php if ($form['site_information']['header_type']['#value'] == 2) print 'active'; ?>" data-img="true" data-dname="true" data-lname="false" data-type="2">
          <div>
            <img src="<?php print $variables['suitcase_interim_wordmark_path']; ?>" height="24px">
            <div class="field-container field-department-name">
              <span class="field-name"><?php print $form['site_information']['site_name']['#value']; ?></span>
              <input type="text" name="department-name" class="form-text" value="<?php print $form['site_information']['site_name']['#value']; ?>" placeholder="Enter Department Name">
            </div>
          </div>
  			</li>
  			<li class="vertical-tab-button <?php if ($form['site_information']['header_type']['#value'] == 3) print 'active'; ?>" data-img="true" data-dname="false" data-lname="true" data-type="3">
          <div>
            <img src="<?php print $variables['suitcase_interim_wordmark_path']; ?>" height="24px">
            <div class="field-container field-laboratory-name">
              <span class="field-name"><?php print $form['site_information']['site_slogan']['#value']; ?></span>
              <input type="text" name="laboratory-name" class="form-text" value="<?php print $form['site_information']['site_slogan']['#value']; ?>" placeholder="Enter Laboratory Name">
            </div>
          </div>
  			</li>
        <li class="vertical-tab-button changeable-image-file <?php if ($form['site_information']['header_type']['#value'] == 4) print 'active'; ?>" data-img="true" data-dname="false" data-lname="true" data-type="4">
          <div>
            <img src="<?php print ($form['site_information']['site_wordmark']['#file'])?file_create_url($form['site_information']['site_wordmark']['#file']->uri):$variables['suitcase_interim_wordmark_path']; ?>" height="24px" class="change-me">
            <?php print render($form['site_information']['site_wordmark']); ?>
            <div class="field-container field-laboratory-name">
              <span class="field-name"><?php print $form['site_information']['site_slogan']['#value']; ?></span>
              <input type="text" name="laboratory-name" class="form-text" value="<?php print $form['site_information']['site_slogan']['#value']; ?>" placeholder="Enter Laboratory Name">
            </div>
          </div>
        </li>
        <li class="vertical-tab-button changeable-image-file <?php if ($form['site_information']['header_type']['#value'] == 5) print 'active'; ?>" data-img="true" data-dname="false" data-lname="false" data-type="5">
          <div>
            <img src="<?php print ($form['site_information']['site_wordmark']['#file'])?file_create_url($form['site_information']['site_wordmark']['#file']->uri):$variables['suitcase_interim_wordmark_path']; ?>" height="24px" class="change-me">
            <?php print render($form['site_information']['site_wordmark']); ?>
          </div>
        </li>
  		</ul>
  	</div>
  	<div class="grid-6">
      <div class="header-preview">
    		<img src="<?php print ($form['site_information']['site_wordmark']['#file'])?file_create_url($form['site_information']['site_wordmark']['#file']->uri):$variables['suitcase_interim_wordmark_path']; ?>" height="24px" class="header-img">
        <header class="header-text">
          <h1 class="site-name-level-1" <?php if ($form['site_information']['header_type']['#value'] > 2) print 'style="display:none"'; ?>><?php print $form['site_information']['site_name']['#value']; ?></h1>
          <div class="site-name-level-2" <?php if ($form['site_information']['header_type']['#value'] == 2 || $form['site_information']['header_type']['#value'] == 5) print 'style="display:none"'; ?>>
          	<hr class="hr-preview">
          	<h2><?php print $form['site_information']['site_slogan']['#value']; ?></h2>
          </div>
        </header>
      </div>
  	</div>
  </div>
  <?php print drupal_render_children($form); ?>
  <script type="text/javascript">
    (function($) {
      var $headerImg = $('.header-preview .header-img'),
        $headerLevel1 = $('.header-preview .site-name-level-1'),
        $headerLevel2 = $('.header-preview .site-name-level-2'),
        headerType = <?php print $form['site_information']['header_type']['#value'] || 1; ?>,
        defaultWordMarkPath = '<?php print $variables['suitcase_interim_wordmark_path']; ?>';

      $('.vertical-tab-button').click(function() {
        $('.vertical-tab-button').removeClass('active');
        $(this).toggleClass('active');
        var d = $(this).data();
        if (d.img) $headerImg.show();
        else $headerImg.hide();
        if (d.dname) $headerLevel1.show();
        else $headerLevel1.hide();
        if (d.lname) $headerLevel2.show();
        else $headerLevel2.hide();
        headerType = d.type;
        $('#edit-header-type').val(headerType);
        if ($(this).hasClass('changeable-image-file')) {
        	$('.header-preview>img').attr({
        		src: $(this).find('img.change-me').attr('src'),
        	});
        } else {
        	$('.header-preview>img').attr({
        		src: defaultWordMarkPath,
        	});
        }
      });

      $('.field-department-name .form-text').bind("propertychange change click keyup input paste", function() {
      	$('.field-department-name .field-name').text($(this).val());
      	$('.field-department-name .form-text').val($(this).val());
      	$('#edit-site-name').val($(this).val());
        $headerLevel1.text($(this).val());
      });

      $('.field-laboratory-name .form-text').bind("propertychange change click keyup input paste", function() {
      	$('.field-laboratory-name .field-name').text($(this).val());
      	$('.field-laboratory-name .form-text').val($(this).val());
      	$('#edit-site-slogan').val($(this).val());
        $headerLevel2.text($(this).val());
      });

      $('#edit-site-wordmark-upload').change(function(e) {
      	var fr = new FileReader();
      	fr.onload = function(e) {
      		var dataURI = e.target.result;
      		$('.change-me').attr({
      			src: dataURI,
      		});
      	};
      	fr.readAsDataURL(e.target.files[0]);
      });
    })(jQuery)
  </script>
  <?php print drupal_render_children($form); ?>
</div>
