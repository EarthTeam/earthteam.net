/**
 * Theme functions file
 *
 * Contains handlers for navigation, accessibility, header sizing
 * footer widgets and Featured Content slider
 *
 */
( function( $ ) {
	var body    = $( 'body' ),
		_window = $( window );
		
} )( jQuery );
/*
 * Put all your regular jQuery in here.
*/
jQuery(document).ready(function($) {
	// Enable menu toggle for small screens.
	jQuery(function($) {
		var section = $( '.menu-toggle' ), button, menu;
		if ( ! section ) {
			return;
		}

		button = section.find( 'h2' );
		if ( ! button ) {
			return;
		}

		// Hide button if menu is missing or empty.
		menu = section.find( 'ul' );
		if ( ! menu || ! menu.children().length ) {
			button.hide();
			return;
		}

		$( 'h2' ).on( 'click', function() {
			section.toggleClass( 'toggled-on' );
		} );
	} );


	// Submenu toggle.
	jQuery(function($) {
		$( 'ul .submenu-toggle' ).on( 'click', function( event ) {
			var that    = $( this ),
				wrapper = $(this).parent().find('ul.menu'),
				subwrapper = $(this).parent().find('ul.menu ul');

			that.toggleClass( 'active' );
			wrapper.toggleClass( 'submenutoggle-on' );
			subwrapper.toggleClass( 'submenutoggle-on' );

		} );
	} );
	//wrap iframes with a fluid video div
	$('iframe[src*="youtube.com"], iframe[src*="vimeo.com"], iframe[src*="google.com/maps"]').wrap('<div class="fluid-video"/>');


}); /* end of as page load scripts */