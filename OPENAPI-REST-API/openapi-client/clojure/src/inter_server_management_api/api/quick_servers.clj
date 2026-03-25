(ns inter-server-management-api.api.quick-servers
  (:require [inter-server-management-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [inter-server-management-api.specs.website-row :refer :all]
            [inter-server-management-api.specs.quickserver-service-info :refer :all]
            [inter-server-management-api.specs.mail-stats-type-volume-to :refer :all]
            [inter-server-management-api.specs.mail-block-click-house :refer :all]
            [inter-server-management-api.specs.quickserver-order-version :refer :all]
            [inter-server-management-api.specs.template-request :refer :all]
            [inter-server-management-api.specs.captcha-response :refer :all]
            [inter-server-management-api.specs.server-asset :refer :all]
            [inter-server-management-api.specs.enable-scrub-500-response :refer :all]
            [inter-server-management-api.specs.login-error-response :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall-rules-inner :refer :all]
            [inter-server-management-api.specs.account-info-data-extra :refer :all]
            [inter-server-management-api.specs.server-order-memory-li-254 :refer :all]
            [inter-server-management-api.specs.affiliate-traffic-row :refer :all]
            [inter-server-management-api.specs.domain-order-services10001 :refer :all]
            [inter-server-management-api.specs.vps-traffic-response :refer :all]
            [inter-server-management-api.specs.home-details-modules-backups :refer :all]
            [inter-server-management-api.specs.quickserver-order-distro-sel-ubuntu :refer :all]
            [inter-server-management-api.specs.domain :refer :all]
            [inter-server-management-api.specs.generic-response :refer :all]
            [inter-server-management-api.specs.mail-blocks :refer :all]
            [inter-server-management-api.specs.update-account-tfa-request :refer :all]
            [inter-server-management-api.specs.billing-invoice-detail :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner :refer :all]
            [inter-server-management-api.specs.place-scrub-order-201-response-order-details :refer :all]
            [inter-server-management-api.specs.license-service-type :refer :all]
            [inter-server-management-api.specs.server-order-field-labels :refer :all]
            [inter-server-management-api.specs.quickserver-service-master :refer :all]
            [inter-server-management-api.specs.licenses-cancel-200-response :refer :all]
            [inter-server-management-api.specs.text-response :refer :all]
            [inter-server-management-api.specs.server-network-info :refer :all]
            [inter-server-management-api.specs.hard-drive :refer :all]
            [inter-server-management-api.specs.account-info-oauth-config-providers :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall :refer :all]
            [inter-server-management-api.specs.success-text-response :refer :all]
            [inter-server-management-api.specs.server-order-control-panel :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-filter-firewall-filters-inner :refer :all]
            [inter-server-management-api.specs.websites-order-json-service-offers-item :refer :all]
            [inter-server-management-api.specs.ticket-post-details-inner :refer :all]
            [inter-server-management-api.specs.website :refer :all]
            [inter-server-management-api.specs.reverse-dns-entries :refer :all]
            [inter-server-management-api.specs.home-services-webhosting :refer :all]
            [inter-server-management-api.specs.patch-oauth-two-factor-200-response :refer :all]
            [inter-server-management-api.specs.mail-stats-type-volume :refer :all]
            [inter-server-management-api.specs.post-website-buy-ip-request :refer :all]
            [inter-server-management-api.specs.domain-prov-process-pending-attributes :refer :all]
            [inter-server-management-api.specs.create-filter-201-response :refer :all]
            [inter-server-management-api.specs.asset-server-cpu-inner :refer :all]
            [inter-server-management-api.specs.websites-order :refer :all]
            [inter-server-management-api.specs.ticket-details :refer :all]
            [inter-server-management-api.specs.webhosting-cancel-200-response :refer :all]
            [inter-server-management-api.specs.field-label :refer :all]
            [inter-server-management-api.specs.download-qs-backup-200-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-data-data-section-response :refer :all]
            [inter-server-management-api.specs.send-mail-adv :refer :all]
            [inter-server-management-api.specs.domain-all-info-attributes :refer :all]
            [inter-server-management-api.specs.server-order :refer :all]
            [inter-server-management-api.specs.service-category :refer :all]
            [inter-server-management-api.specs.website-billing-details :refer :all]
            [inter-server-management-api.specs.websites-order-service-types :refer :all]
            [inter-server-management-api.specs.domain-nameserver-put-request :refer :all]
            [inter-server-management-api.specs.vps-ip-info-row :refer :all]
            [inter-server-management-api.specs.account-info-post :refer :all]
            [inter-server-management-api.specs.account-info-data-cc :refer :all]
            [inter-server-management-api.specs.mail-stats-type :refer :all]
            [inter-server-management-api.specs.license-client-link :refer :all]
            [inter-server-management-api.specs.domain-row :refer :all]
            [inter-server-management-api.specs.home-services-vps :refer :all]
            [inter-server-management-api.specs.update-ticket-response-schema :refer :all]
            [inter-server-management-api.specs.create-filter-500-response :refer :all]
            [inter-server-management-api.specs.mail-schema-extra-info-tables :refer :all]
            [inter-server-management-api.specs.server-location1 :refer :all]
            [inter-server-management-api.specs.ip-object :refer :all]
            [inter-server-management-api.specs.dns-new-record :refer :all]
            [inter-server-management-api.specs.vps-row :refer :all]
            [inter-server-management-api.specs.quickserver-order-distro-sel :refer :all]
            [inter-server-management-api.specs.vps-traffic-history-section-response :refer :all]
            [inter-server-management-api.specs.account-info-oauthproviders :refer :all]
            [inter-server-management-api.specs.websites-order-packages-info :refer :all]
            [inter-server-management-api.specs.disable-scrub-500-response :refer :all]
            [inter-server-management-api.specs.home-details-modules-quickservers :refer :all]
            [inter-server-management-api.specs.delete-filter-500-response :refer :all]
            [inter-server-management-api.specs.login-success-response :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-cp-inner :refer :all]
            [inter-server-management-api.specs.create-firewall-rule :refer :all]
            [inter-server-management-api.specs.account-info-data-fraudrecord :refer :all]
            [inter-server-management-api.specs.backup-service-info :refer :all]
            [inter-server-management-api.specs.dns-update-record :refer :all]
            [inter-server-management-api.specs.delete-geo-firewall-rule :refer :all]
            [inter-server-management-api.specs.mail-billing-details :refer :all]
            [inter-server-management-api.specs.vps-order-templates-hyperv :refer :all]
            [inter-server-management-api.specs.websites-order-json-services :refer :all]
            [inter-server-management-api.specs.scrub-ips-log-row-schema :refer :all]
            [inter-server-management-api.specs.website-table :refer :all]
            [inter-server-management-api.specs.domain-name-server :refer :all]
            [inter-server-management-api.specs.config-ids :refer :all]
            [inter-server-management-api.specs.ticket-new-response :refer :all]
            [inter-server-management-api.specs.affiliate-dock-setup :refer :all]
            [inter-server-management-api.specs.server-order-os :refer :all]
            [inter-server-management-api.specs.account-info-max-mind-response-risk-score :refer :all]
            [inter-server-management-api.specs.billing-add-cc-request :refer :all]
            [inter-server-management-api.specs.account-info-max-mind-response :refer :all]
            [inter-server-management-api.specs.password-request :refer :all]
            [inter-server-management-api.specs.tickets-count-array :refer :all]
            [inter-server-management-api.specs.mail-schema :refer :all]
            [inter-server-management-api.specs.vps-order-post-request :refer :all]
            [inter-server-management-api.specs.billing-payment-method-request :refer :all]
            [inter-server-management-api.specs.home :refer :all]
            [inter-server-management-api.specs.server-locations :refer :all]
            [inter-server-management-api.specs.service :refer :all]
            [inter-server-management-api.specs.server-order-os-li :refer :all]
            [inter-server-management-api.specs.vps :refer :all]
            [inter-server-management-api.specs.vps-template-row :refer :all]
            [inter-server-management-api.specs.backup :refer :all]
            [inter-server-management-api.specs.account-info-data-ccs :refer :all]
            [inter-server-management-api.specs.disable-scrub-400-response :refer :all]
            [inter-server-management-api.specs.websites-order-packages :refer :all]
            [inter-server-management-api.specs.quickserver-billing-details :refer :all]
            [inter-server-management-api.specs.get-oauth-redirect-200-response :refer :all]
            [inter-server-management-api.specs.website-client-link :refer :all]
            [inter-server-management-api.specs.server-network-info-assets :refer :all]
            [inter-server-management-api.specs.server-service-info :refer :all]
            [inter-server-management-api.specs.home-details-modules-vps :refer :all]
            [inter-server-management-api.specs.backup-order-put-response :refer :all]
            [inter-server-management-api.specs.scrub-ip-filter-types-filters-value :refer :all]
            [inter-server-management-api.specs.patch-oauth-two-factor-request :refer :all]
            [inter-server-management-api.specs.home-ticket-status-view :refer :all]
            [inter-server-management-api.specs.quickserver-order-server-details :refer :all]
            [inter-server-management-api.specs.vps-order-templates-hyperv-windows :refer :all]
            [inter-server-management-api.specs.dns-new-domain :refer :all]
            [inter-server-management-api.specs.create-geo-firewall-rule :refer :all]
            [inter-server-management-api.specs.create-rule-400-response :refer :all]
            [inter-server-management-api.specs.account-info-data-email-settings :refer :all]
            [inter-server-management-api.specs.mail-delist-response :refer :all]
            [inter-server-management-api.specs.server-order-cpu :refer :all]
            [inter-server-management-api.specs.domain-nameserver-post-request :refer :all]
            [inter-server-management-api.specs.create-filter-400-response :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-service-info :refer :all]
            [inter-server-management-api.specs.server-order-config-ids :refer :all]
            [inter-server-management-api.specs.vps-traffic-usage-average-section-response :refer :all]
            [inter-server-management-api.specs.mail-block-rspamd :refer :all]
            [inter-server-management-api.specs.vps-templates-list :refer :all]
            [inter-server-management-api.specs.server :refer :all]
            [inter-server-management-api.specs.vps-order-platform-packages :refer :all]
            [inter-server-management-api.specs.domain-service-info :refer :all]
            [inter-server-management-api.specs.scrub-ips-delete-rule-200-response :refer :all]
            [inter-server-management-api.specs.server-extra-info-tables :refer :all]
            [inter-server-management-api.specs.asset-server :refer :all]
            [inter-server-management-api.specs.dns-record-type :refer :all]
            [inter-server-management-api.specs.domain-nameserver-get-response :refer :all]
            [inter-server-management-api.specs.licenses-order-service-categories :refer :all]
            [inter-server-management-api.specs.vps-order-platform-names :refer :all]
            [inter-server-management-api.specs.quickserver-order :refer :all]
            [inter-server-management-api.specs.websites-order-packges :refer :all]
            [inter-server-management-api.specs.servers-buy-now-error :refer :all]
            [inter-server-management-api.specs.cpu-with-defaults :refer :all]
            [inter-server-management-api.specs.close-ticket-response-schema :refer :all]
            [inter-server-management-api.specs.quickserver-order-templates-ubuntu64 :refer :all]
            [inter-server-management-api.specs.vps-extra-info-tables :refer :all]
            [inter-server-management-api.specs.home-services-licenses :refer :all]
            [inter-server-management-api.specs.website-login-response :refer :all]
            [inter-server-management-api.specs.domain-nameserver-get-response-inner :refer :all]
            [inter-server-management-api.specs.license-extra-info-tables :refer :all]
            [inter-server-management-api.specs.mail-log :refer :all]
            [inter-server-management-api.specs.domain-prov-process-pending :refer :all]
            [inter-server-management-api.specs.domain-lookup-response :refer :all]
            [inter-server-management-api.specs.operating-system :refer :all]
            [inter-server-management-api.specs.dns-record :refer :all]
            [inter-server-management-api.specs.vps-order-os-names :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            [inter-server-management-api.specs.module-settings :refer :all]
            [inter-server-management-api.specs.buy-it-now-row-cpu-inner :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response :refer :all]
            [inter-server-management-api.specs.quickserver-extra-info-tables :refer :all]
            [inter-server-management-api.specs.inline-object :refer :all]
            [inter-server-management-api.specs.vps-cp-data :refer :all]
            [inter-server-management-api.specs.server-order-cpu-li :refer :all]
            [inter-server-management-api.specs.domain-order-services :refer :all]
            [inter-server-management-api.specs.login-info :refer :all]
            [inter-server-management-api.specs.home-services-vps-links :refer :all]
            [inter-server-management-api.specs.cpu :refer :all]
            [inter-server-management-api.specs.get-order-detail-200-response :refer :all]
            [inter-server-management-api.specs.quickserver-row :refer :all]
            [inter-server-management-api.specs.website-service-info :refer :all]
            [inter-server-management-api.specs.license :refer :all]
            [inter-server-management-api.specs.post-oauth-callback-request :refer :all]
            [inter-server-management-api.specs.mail-alert-update-request :refer :all]
            [inter-server-management-api.specs.billing-prepay-request :refer :all]
            [inter-server-management-api.specs.get-account-tfa-setup-200-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-data-data-section-response-inner :refer :all]
            [inter-server-management-api.specs.home-details-modules-servers :refer :all]
            [inter-server-management-api.specs.scrub-ips-delete-rule-500-response :refer :all]
            [inter-server-management-api.specs.buy-it-now-row-cpu-inner-one-of :refer :all]
            [inter-server-management-api.specs.mail-extra-info-table :refer :all]
            [inter-server-management-api.specs.login-submission-example :refer :all]
            [inter-server-management-api.specs.license-billing-details :refer :all]
            [inter-server-management-api.specs.url-request :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables :refer :all]
            [inter-server-management-api.specs.mail-alert-request :refer :all]
            [inter-server-management-api.specs.quickserver-addons-row :refer :all]
            [inter-server-management-api.specs.website-service-master :refer :all]
            [inter-server-management-api.specs.domain-whois-privacy-request :refer :all]
            [inter-server-management-api.specs.license-ip-info-row :refer :all]
            [inter-server-management-api.specs.charge-invoice-rows-invoices-value-paid-invoices-value :refer :all]
            [inter-server-management-api.specs.server-ipmi-power-request :refer :all]
            [inter-server-management-api.specs.quickservers-cancel-200-response :refer :all]
            [inter-server-management-api.specs.get-order-detail-200-response-ips-inner :refer :all]
            [inter-server-management-api.specs.form-values :refer :all]
            [inter-server-management-api.specs.service-type :refer :all]
            [inter-server-management-api.specs.vps-snapshot :refer :all]
            [inter-server-management-api.specs.raid-option :refer :all]
            [inter-server-management-api.specs.service-categories :refer :all]
            [inter-server-management-api.specs.vps-order :refer :all]
            [inter-server-management-api.specs.backup-service-extra :refer :all]
            [inter-server-management-api.specs.backup-billing-details :refer :all]
            [inter-server-management-api.specs.affiliate-payment-setup :refer :all]
            [inter-server-management-api.specs.vps-da-license :refer :all]
            [inter-server-management-api.specs.account-features :refer :all]
            [inter-server-management-api.specs.login-submission-example-g-recaptcha-response :refer :all]
            [inter-server-management-api.specs.mail-service-info :refer :all]
            [inter-server-management-api.specs.status-monthly-breakdown :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-client-links-inner :refer :all]
            [inter-server-management-api.specs.vps-order-templates :refer :all]
            [inter-server-management-api.specs.restore-request :refer :all]
            [inter-server-management-api.specs.account-info :refer :all]
            [inter-server-management-api.specs.control-panel :refer :all]
            [inter-server-management-api.specs.backup-extra-info-tables :refer :all]
            [inter-server-management-api.specs.send-mail :refer :all]
            [inter-server-management-api.specs.ip-block :refer :all]
            [inter-server-management-api.specs.servers-buy-now-response :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-ips-inner :refer :all]
            [inter-server-management-api.specs.domain-billing-details :refer :all]
            [inter-server-management-api.specs.domain-order :refer :all]
            [inter-server-management-api.specs.backup-login-response :refer :all]
            [inter-server-management-api.specs.backup-ip-info-row :refer :all]
            [inter-server-management-api.specs.home-services-servers :refer :all]
            [inter-server-management-api.specs.billing-invoice-list :refer :all]
            [inter-server-management-api.specs.hostname-object :refer :all]
            [inter-server-management-api.specs.backup-client-link :refer :all]
            [inter-server-management-api.specs.mail-deliverability-response :refer :all]
            [inter-server-management-api.specs.delete-filter-400-response :refer :all]
            [inter-server-management-api.specs.domain-dnssec-records-inner :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables-scrub-ips :refer :all]
            [inter-server-management-api.specs.quickserver-addons :refer :all]
            [inter-server-management-api.specs.server-order-memory-li :refer :all]
            [inter-server-management-api.specs.quickserver-order-templates :refer :all]
            [inter-server-management-api.specs.server-ipmi-live-request :refer :all]
            [inter-server-management-api.specs.mail-client-link :refer :all]
            [inter-server-management-api.specs.server-assets :refer :all]
            [inter-server-management-api.specs.domain-contact-details :refer :all]
            [inter-server-management-api.specs.website-table-row :refer :all]
            [inter-server-management-api.specs.home-details-modules-webhosting :refer :all]
            [inter-server-management-api.specs.create-filter :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-raid-inner :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-resposne :refer :all]
            [inter-server-management-api.specs.dns-list-item :refer :all]
            [inter-server-management-api.specs.cancel-domain-200-response :refer :all]
            [inter-server-management-api.specs.home-details :refer :all]
            [inter-server-management-api.specs.domain-order-tld-services :refer :all]
            [inter-server-management-api.specs.server-ipmi-live-info :refer :all]
            [inter-server-management-api.specs.home-services-domains-links :refer :all]
            [inter-server-management-api.specs.home-services :refer :all]
            [inter-server-management-api.specs.websites-order-service-offers :refer :all]
            [inter-server-management-api.specs.vps-order-location-stock :refer :all]
            [inter-server-management-api.specs.account-info-limits :refer :all]
            [inter-server-management-api.specs.queue-response :refer :all]
            [inter-server-management-api.specs.cancel-scrub-ip-200-response :refer :all]
            [inter-server-management-api.specs.bandwidth :refer :all]
            [inter-server-management-api.specs.services :refer :all]
            [inter-server-management-api.specs.get-order-detail-200-response-package-costs :refer :all]
            [inter-server-management-api.specs.domain-client-link :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.vps-backup-row :refer :all]
            [inter-server-management-api.specs.post-oauth-callback-200-response :refer :all]
            [inter-server-management-api.specs.home-details-modules-licenses :refer :all]
            [inter-server-management-api.specs.backup-order-post-response-cj-params :refer :all]
            [inter-server-management-api.specs.vps-order-location-names :refer :all]
            [inter-server-management-api.specs.get-website-buy-ip-200-response :refer :all]
            [inter-server-management-api.specs.licenses-order-service-categories509 :refer :all]
            [inter-server-management-api.specs.memory-option :refer :all]
            [inter-server-management-api.specs.domain-all-info :refer :all]
            [inter-server-management-api.specs.login-service-counts :refer :all]
            [inter-server-management-api.specs.domain-dnssec-records :refer :all]
            [inter-server-management-api.specs.vps-service-info :refer :all]
            [inter-server-management-api.specs.affiliate-banner-row :refer :all]
            [inter-server-management-api.specs.create-rule-500-response :refer :all]
            [inter-server-management-api.specs.backups-order :refer :all]
            [inter-server-management-api.specs.backup-order-put-request :refer :all]
            [inter-server-management-api.specs.account-info-oauth-config :refer :all]
            [inter-server-management-api.specs.reply-ticket-request :refer :all]
            [inter-server-management-api.specs.mail-delist-request :refer :all]
            [inter-server-management-api.specs.scrub-ips-delete-rule-400-response :refer :all]
            [inter-server-management-api.specs.backup-ip-info :refer :all]
            [inter-server-management-api.specs.post-website-migration-request :refer :all]
            [inter-server-management-api.specs.modules :refer :all]
            [inter-server-management-api.specs.websites-order-json-service-offers :refer :all]
            [inter-server-management-api.specs.domain-owner-contact :refer :all]
            [inter-server-management-api.specs.mail-tutorials-table :refer :all]
            [inter-server-management-api.specs.region :refer :all]
            [inter-server-management-api.specs.domain-admin-contact :refer :all]
            [inter-server-management-api.specs.vps-traffic-usage-response :refer :all]
            [inter-server-management-api.specs.vps-cancel-200-response :refer :all]
            [inter-server-management-api.specs.server-network-info-switchports :refer :all]
            [inter-server-management-api.specs.scrub-ip-filter-types :refer :all]
            [inter-server-management-api.specs.get-order-detail-200-response-service-types-inner :refer :all]
            [inter-server-management-api.specs.quickserver-order-version-centosstream8 :refer :all]
            [inter-server-management-api.specs.create-geo-rule-400-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-data-section-response :refer :all]
            [inter-server-management-api.specs.charge-invoice-rows-invoices-value :refer :all]
            [inter-server-management-api.specs.cancel-backup-200-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-usage-average-response :refer :all]
            [inter-server-management-api.specs.mail-alerts-response :refer :all]
            [inter-server-management-api.specs.vps-da-data :refer :all]
            [inter-server-management-api.specs.deny-rule-record :refer :all]
            [inter-server-management-api.specs.home-services-backups :refer :all]
            [inter-server-management-api.specs.create-rule-201-response :refer :all]
            [inter-server-management-api.specs.quickserver-ip-table-row :refer :all]
            [inter-server-management-api.specs.email-address :refer :all]
            [inter-server-management-api.specs.vps-plesk-license :refer :all]
            [inter-server-management-api.specs.vps-traffic-history-section-data-response :refer :all]
            [inter-server-management-api.specs.backup-service-master :refer :all]
            [inter-server-management-api.specs.vps-traffic-history-response :refer :all]
            [inter-server-management-api.specs.vps-plesk12-data :refer :all]
            [inter-server-management-api.specs.floating-ips-cancel-200-response :refer :all]
            [inter-server-management-api.specs.initiate-payment-200-response :refer :all]
            [inter-server-management-api.specs.login-submission-example-g-recaptcha-response-dep :refer :all]
            [inter-server-management-api.specs.vps-service-addons :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-billing-details :refer :all]
            [inter-server-management-api.specs.domain-dnssec-request :refer :all]
            [inter-server-management-api.specs.vps-order-put-response :refer :all]
            [inter-server-management-api.specs.servers-buy-now-response-order-details :refer :all]
            [inter-server-management-api.specs.ssl-cancel-200-response :refer :all]
            [inter-server-management-api.specs.server-order-cp-li :refer :all]
            [inter-server-management-api.specs.vps-backup-rows :refer :all]
            [inter-server-management-api.specs.backup-row :refer :all]
            [inter-server-management-api.specs.home-services-licenses-links :refer :all]
            [inter-server-management-api.specs.mail-extra-info-table-row :refer :all]
            [inter-server-management-api.specs.mail-log-entry :refer :all]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            [inter-server-management-api.specs.buy-it-now-list :refer :all]
            [inter-server-management-api.specs.home-ticket-status :refer :all]
            [inter-server-management-api.specs.ticket-new :refer :all]
            [inter-server-management-api.specs.account-info-limits-inner :refer :all]
            [inter-server-management-api.specs.home-details-modules-domains :refer :all]
            [inter-server-management-api.specs.ip-limit-range :refer :all]
            [inter-server-management-api.specs.ticket-post-details :refer :all]
            [inter-server-management-api.specs.view-mail-log-start-date-parameter :refer :all]
            [inter-server-management-api.specs.services-info :refer :all]
            [inter-server-management-api.specs.domain-order-response :refer :all]
            [inter-server-management-api.specs.server-billing-details :refer :all]
            [inter-server-management-api.specs.backups-order-service-types :refer :all]
            [inter-server-management-api.specs.vps-service-master :refer :all]
            [inter-server-management-api.specs.home-services-servers-links :refer :all]
            [inter-server-management-api.specs.mail-cancel-200-response :refer :all]
            [inter-server-management-api.specs.deny-rule-new :refer :all]
            [inter-server-management-api.specs.server-row :refer :all]
            [inter-server-management-api.specs.home-services-domains :refer :all]
            [inter-server-management-api.specs.server-order-ips-li :refer :all]
            [inter-server-management-api.specs.mail-service-type :refer :all]
            [inter-server-management-api.specs.mail-stats-type-volume-ip :refer :all]
            [inter-server-management-api.specs.license-ip-info :refer :all]
            [inter-server-management-api.specs.home-services-webhosting-links :refer :all]
            [inter-server-management-api.specs.server-order-raid :refer :all]
            [inter-server-management-api.specs.website-backups-inner :refer :all]
            [inter-server-management-api.specs.search-autocomplete-response :refer :all]
            [inter-server-management-api.specs.server-switchport :refer :all]
            [inter-server-management-api.specs.vps-order-service-types-32 :refer :all]
            [inter-server-management-api.specs.post-website-buy-ip-200-response :refer :all]
            [inter-server-management-api.specs.account-info-oauth-config-providers-value :refer :all]
            [inter-server-management-api.specs.service-types :refer :all]
            [inter-server-management-api.specs.domain-order-response-attributes :refer :all]
            [inter-server-management-api.specs.vps-order-package-costs :refer :all]
            [inter-server-management-api.specs.quickserver-order-server-details381 :refer :all]
            [inter-server-management-api.specs.update-ticket :refer :all]
            [inter-server-management-api.specs.licenses-order-service-types11482 :refer :all]
            [inter-server-management-api.specs.mail-order :refer :all]
            [inter-server-management-api.specs.tickets-row :refer :all]
            [inter-server-management-api.specs.ticket-custom-field-details :refer :all]
            [inter-server-management-api.specs.place-scrub-order-201-response :refer :all]
            [inter-server-management-api.specs.place-buy-now-server-request :refer :all]
            [inter-server-management-api.specs.home-details-modules :refer :all]
            [inter-server-management-api.specs.server-order-ip :refer :all]
            [inter-server-management-api.specs.server-order-form-values :refer :all]
            [inter-server-management-api.specs.view-ticket-response :refer :all]
            [inter-server-management-api.specs.delete-filter-200-response :refer :all]
            [inter-server-management-api.specs.mail-row :refer :all]
            [inter-server-management-api.specs.quickserver :refer :all]
            [inter-server-management-api.specs.reply-ticket-response-schema :refer :all]
            [inter-server-management-api.specs.vps-order-put-request :refer :all]
            [inter-server-management-api.specs.vps-traffic-data-data-response :refer :all]
            [inter-server-management-api.specs.server-order-get-response :refer :all]
            [inter-server-management-api.specs.mail-stats-type-volume-from :refer :all]
            [inter-server-management-api.specs.mail-alerts-response-inner :refer :all]
            [inter-server-management-api.specs.domain-tech-contact :refer :all]
            [inter-server-management-api.specs.server-client-link :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-os-inner :refer :all]
            [inter-server-management-api.specs.charge-invoice-rows :refer :all]
            [inter-server-management-api.specs.licenses-order-package-costs :refer :all]
            [inter-server-management-api.specs.domain-all-info-attributes-contact-set :refer :all]
            [inter-server-management-api.specs.billing-verify-cc-request :refer :all]
            [inter-server-management-api.specs.vps-order-service-types :refer :all]
            [inter-server-management-api.specs.mail-attachment :refer :all]
            [inter-server-management-api.specs.invoice-row :refer :all]
            [inter-server-management-api.specs.place-scrub-order-201-response-order-details-cj-params :refer :all]
            [inter-server-management-api.specs.delete-firewall-rule :refer :all]
            [inter-server-management-api.specs.tickets :refer :all]
            [inter-server-management-api.specs.website-extra-info-tables :refer :all]
            [inter-server-management-api.specs.account-ssh-key :refer :all]
            [inter-server-management-api.specs.websites-order-service-offer :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-bandwidth-inner :refer :all]
            [inter-server-management-api.specs.domain-service-type :refer :all]
            [inter-server-management-api.specs.vps-client-link :refer :all]
            [inter-server-management-api.specs.vps-billing-details :refer :all]
            [inter-server-management-api.specs.buy-it-now-row :refer :all]
            [inter-server-management-api.specs.timezone-update :refer :all]
            [inter-server-management-api.specs.servers-cancel-200-response :refer :all]
            [inter-server-management-api.specs.server-order-memory :refer :all]
            [inter-server-management-api.specs.config-lists :refer :all]
            [inter-server-management-api.specs.website-backups :refer :all]
            [inter-server-management-api.specs.vps-ip-info :refer :all]
            [inter-server-management-api.specs.domain-billing-extra :refer :all]
            [inter-server-management-api.specs.backup-order-post-response :refer :all]
            [inter-server-management-api.specs.scrub-ips-row-schema :refer :all]
            [inter-server-management-api.specs.scrub-ip-place-order :refer :all]
            [inter-server-management-api.specs.license-service-info :refer :all]
            [inter-server-management-api.specs.server-lease :refer :all]
            [inter-server-management-api.specs.charge-invoice-rows-invoices-value-paid-invoices-value-refund-invoices-value :refer :all]
            [inter-server-management-api.specs.enable-scrub-200-response :refer :all]
            [inter-server-management-api.specs.vps-order-location-stock-1 :refer :all]
            [inter-server-management-api.specs.get-account-info-401-response :refer :all]
            [inter-server-management-api.specs.account-info-data :refer :all]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response :refer :all]
            [inter-server-management-api.specs.domain-search-response :refer :all]
            [inter-server-management-api.specs.backups-order-package-costs :refer :all]
            [inter-server-management-api.specs.account-info-country-currencies :refer :all]
            [inter-server-management-api.specs.disable-scrub-200-response :refer :all]
            [inter-server-management-api.specs.server-order-bandwidth-li :refer :all]
            [inter-server-management-api.specs.email-address-name :refer :all]
            [inter-server-management-api.specs.post-website-migration-200-response :refer :all]
            [inter-server-management-api.specs.quickserver-ip-info :refer :all]
            [inter-server-management-api.specs.licenses-order :refer :all]
            [inter-server-management-api.specs.payment-invoice-rows :refer :all]
            [inter-server-management-api.specs.license-row :refer :all]
            [inter-server-management-api.specs.server-order-bandwidth :refer :all]
            [inter-server-management-api.specs.quickserver-service-extra :refer :all]
            [inter-server-management-api.specs.quickserver-client-link :refer :all]
            [inter-server-management-api.specs.download-qs-backup-request :refer :all]
            [inter-server-management-api.specs.invoice :refer :all]
            [inter-server-management-api.specs.licenses-order-service-types :refer :all]
            [inter-server-management-api.specs.mail-tutorials-table-row :refer :all]
            [inter-server-management-api.specs.vps-service-extra :refer :all]
            )
  (:import (java.io File)))


(defn-spec add-qs-with-http-info any?
  "Place QuickServer Order
  Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment."
  []
  (call-api "/qs/order" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec add-qs any?
  "Place QuickServer Order
  Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment."
  []
  (let [res (:data (add-qs-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec delete-qs-backup-with-http-info any?
  "Delete QuickServer Backup
  Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting."
  ([id int?, file string?, ] (delete-qs-backup-with-http-info id file nil))
  ([id int?, file string?, {:keys [all]} (s/map-of keyword? any?)]
   (check-required-params id file)
   (call-api "/qs/{id}/backups" :delete
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"all" all "file" file }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec delete-qs-backup success-text-response-spec
  "Delete QuickServer Backup
  Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting."
  ([id int?, file string?, ] (delete-qs-backup id file nil))
  ([id int?, file string?, optional-params any?]
   (let [res (:data (delete-qs-backup-with-http-info id file optional-params))]
     (if (:decode-models *api-context*)
        (st/decode success-text-response-spec res st/string-transformer)
        res))))


(defn-spec do-qs-block-smtp-with-http-info any?
  "Block QuickServer SMTP
  Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/block_smtp" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-block-smtp queue-response-spec
  "Block QuickServer SMTP
  Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies."
  [id int?]
  (let [res (:data (do-qs-block-smtp-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-disable-cd-with-http-info any?
  "Disable CD Drive
  Disables the virtual CD drive for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/disable_cd" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-disable-cd queue-response-spec
  "Disable CD Drive
  Disables the virtual CD drive for the QuickServer."
  [id int?]
  (let [res (:data (do-qs-disable-cd-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-disable-quota-with-http-info any?
  "Disable Quotas
  Disables disk quota enforcement for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/disable_quota" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-disable-quota queue-response-spec
  "Disable Quotas
  Disables disk quota enforcement for the QuickServer."
  [id int?]
  (let [res (:data (do-qs-disable-quota-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-eject-cd-with-http-info any?
  "Eject CD Drive
  Ejects the virtual CD from the QuickServer's CD drive."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/eject_cd" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-eject-cd queue-response-spec
  "Eject CD Drive
  Ejects the virtual CD from the QuickServer's CD drive."
  [id int?]
  (let [res (:data (do-qs-eject-cd-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-enable-quota-with-http-info any?
  "Enable Quotas
  Enables disk quota enforcement for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/enable_quota" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-enable-quota queue-response-spec
  "Enable Quotas
  Enables disk quota enforcement for the QuickServer."
  [id int?]
  (let [res (:data (do-qs-enable-quota-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-restart-with-http-info any?
  "Restart QuickServer
  Restarts the QuickServer. The server will be shut down and started again."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/restart" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-restart queue-response-spec
  "Restart QuickServer
  Restarts the QuickServer. The server will be shut down and started again."
  [id int?]
  (let [res (:data (do-qs-restart-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-start-with-http-info any?
  "Start QuickServer
  Powers on the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/start" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-start queue-response-spec
  "Start QuickServer
  Powers on the QuickServer."
  [id int?]
  (let [res (:data (do-qs-start-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-qs-stop-with-http-info any?
  "Stop QuickServer
  Powers off the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/stop" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-qs-stop queue-response-spec
  "Stop QuickServer
  Powers off the QuickServer."
  [id int?]
  (let [res (:data (do-qs-stop-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec download-qs-backup-with-http-info any?
  "Download QuickServer Backup
  Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames."
  ([id int?, download-qs-backup-request download-qs-backup-request, ] (download-qs-backup-with-http-info id download-qs-backup-request nil))
  ([id int?, download-qs-backup-request download-qs-backup-request, {:keys [all]} (s/map-of keyword? any?)]
   (check-required-params id download-qs-backup-request)
   (call-api "/qs/{id}/backups" :patch
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"all" all }
              :form-params   {}
              :body-param    download-qs-backup-request
              :content-types ["application/json" "multipart/form-data"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec download-qs-backup download-qs-backup-200-response-spec
  "Download QuickServer Backup
  Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames."
  ([id int?, download-qs-backup-request download-qs-backup-request, ] (download-qs-backup id download-qs-backup-request nil))
  ([id int?, download-qs-backup-request download-qs-backup-request, optional-params any?]
   (let [res (:data (download-qs-backup-with-http-info id download-qs-backup-request optional-params))]
     (if (:decode-models *api-context*)
        (st/decode download-qs-backup-200-response-spec res st/string-transformer)
        res))))


(defn-spec get-new-qs-with-http-info any?
  "Get QuickServer Ordering Information
  Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection."
  []
  (call-api "/qs/order" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-new-qs quickserver-order-spec
  "Get QuickServer Ordering Information
  Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection."
  []
  (let [res (:data (get-new-qs-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode quickserver-order-spec res st/string-transformer)
       res)))


(defn-spec get-qs-backups-with-http-info any?
  "List QuickServer Backups
  Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup."
  ([id int?, ] (get-qs-backups-with-http-info id nil))
  ([id int?, {:keys [all]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/qs/{id}/backups" :get
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"all" all }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-qs-backups vps-backup-rows-spec
  "List QuickServer Backups
  Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup."
  ([id int?, ] (get-qs-backups id nil))
  ([id int?, optional-params any?]
   (let [res (:data (get-qs-backups-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode vps-backup-rows-spec res st/string-transformer)
        res))))


(defn-spec get-qs-change-hostname-with-http-info any?
  "Get QuickServer Hostname
  Retrieves the current hostname and any validation requirements for changing it."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_hostname" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-change-hostname any?
  "Get QuickServer Hostname
  Retrieves the current hostname and any validation requirements for changing it."
  [id int?]
  (let [res (:data (get-qs-change-hostname-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-change-root-password-with-http-info any?
  "Get Change Root Password Info
  Retrieves instructions or metadata needed to reset the root password."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_root_password" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-change-root-password any?
  "Get Change Root Password Info
  Retrieves instructions or metadata needed to reset the root password."
  [id int?]
  (let [res (:data (get-qs-change-root-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-change-timezone-with-http-info any?
  "Get Timezone Info
  Returns the list of available timezones that can be set on the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_timezone" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-change-timezone (s/coll-of string?)
  "Get Timezone Info
  Returns the list of available timezones that can be set on the QuickServer."
  [id int?]
  (let [res (:data (get-qs-change-timezone-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of string?) res st/string-transformer)
       res)))


(defn-spec get-qs-change-webuzo-password-with-http-info any?
  "Webuzo Change Pass Info
  Retrieves instructions or metadata for changing the Webuzo control panel password."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_webuzo_password" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-change-webuzo-password any?
  "Webuzo Change Pass Info
  Retrieves instructions or metadata for changing the Webuzo control panel password."
  [id int?]
  (let [res (:data (get-qs-change-webuzo-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-info-with-http-info any?
  "Get QuickServer Order
  Returns detailed QuickServer information, including credentials, IPs, and available client actions."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-info quickserver-spec
  "Get QuickServer Order
  Returns detailed QuickServer information, including credentials, IPs, and available client actions."
  [id int?]
  (let [res (:data (get-qs-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode quickserver-spec res st/string-transformer)
       res)))


(defn-spec get-qs-insert-cd-with-http-info any?
  "Insert CD Information
  Returns available ISO images that can be mounted in the QuickServer's virtual CD drive."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/insert_cd" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-insert-cd any?
  "Insert CD Information
  Returns available ISO images that can be mounted in the QuickServer's virtual CD drive."
  [id int?]
  (let [res (:data (get-qs-insert-cd-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-invoices-with-http-info any?
  "Get QuickServer Invoices
  Returns the billing invoices associated with this QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/invoices" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-invoices charge-invoice-rows-spec
  "Get QuickServer Invoices
  Returns the billing invoices associated with this QuickServer."
  [id int?]
  (let [res (:data (get-qs-invoices-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode charge-invoice-rows-spec res st/string-transformer)
       res)))


(defn-spec get-qs-list-with-http-info any?
  "List QuickServers
  Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server."
  []
  (call-api "/qs" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-list (s/coll-of quickserver-row-spec)
  "List QuickServers
  Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server."
  []
  (let [res (:data (get-qs-list-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of quickserver-row-spec) res st/string-transformer)
       res)))


(defn-spec get-qs-reinstall-os-with-http-info any?
  "QuickServer Reinstall OS Options
  Returns the list of available operating system templates for reinstalling the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/reinstall_os" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-reinstall-os vps-templates-list-spec
  "QuickServer Reinstall OS Options
  Returns the list of available operating system templates for reinstalling the QuickServer."
  [id int?]
  (let [res (:data (get-qs-reinstall-os-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode vps-templates-list-spec res st/string-transformer)
       res)))


(defn-spec get-qs-reset-password-with-http-info any?
  "Reset QuickServer Password Info
  Returns information needed before resetting the QuickServer's root password."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/reset_password" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-reset-password any?
  "Reset QuickServer Password Info
  Returns information needed before resetting the QuickServer's root password."
  [id int?]
  (let [res (:data (get-qs-reset-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-reverse-dns-with-http-info any?
  "Reverse DNS Info
  Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/reverse_dns" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-reverse-dns reverse-dns-entries-spec
  "Reverse DNS Info
  Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses."
  [id int?]
  (let [res (:data (get-qs-reverse-dns-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode reverse-dns-entries-spec res st/string-transformer)
       res)))


(defn-spec get-qs-setup-vnc-with-http-info any?
  "VNC Setup Info
  Returns the current VNC connection information for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/setup_vnc" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-setup-vnc any?
  "VNC Setup Info
  Returns the current VNC connection information for the QuickServer."
  [id int?]
  (let [res (:data (get-qs-setup-vnc-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-traffic-usage-with-http-info any?
  "Get Traffic Usage
  Returns bandwidth traffic usage data for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/traffic_usage" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-traffic-usage any?
  "Get Traffic Usage
  Returns bandwidth traffic usage data for the QuickServer."
  [id int?]
  (let [res (:data (get-qs-traffic-usage-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-view-desktop-with-http-info any?
  "Get View Desktop Info
  Returns remote desktop connection information for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/view_desktop" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-view-desktop any?
  "Get View Desktop Info
  Returns remote desktop connection information for the QuickServer."
  [id int?]
  (let [res (:data (get-qs-view-desktop-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-qs-welcome-email-with-http-info any?
  "Resend QuickServer Welcome Email
  Resends the welcome email containing connection details and credentials for the QuickServer order."
  [id string?]
  (check-required-params id)
  (call-api "/qs/{id}/welcome_email" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-qs-welcome-email text-response-spec
  "Resend QuickServer Welcome Email
  Resends the welcome email containing connection details and credentials for the QuickServer order."
  [id string?]
  (let [res (:data (get-qs-welcome-email-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-backup-with-http-info any?
  "Create QuickServer Backup
  Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/backup" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-backup queue-response-spec
  "Create QuickServer Backup
  Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints."
  [id int?]
  (let [res (:data (post-qs-backup-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-change-hostname-with-http-info any?
  "Update QuickServer Hostname
  Submits a hostname change request for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_hostname" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-change-hostname queue-response-spec
  "Update QuickServer Hostname
  Submits a hostname change request for the QuickServer."
  [id int?]
  (let [res (:data (post-qs-change-hostname-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-change-root-password-with-http-info any?
  "Change Root Password
  Triggers a root password reset for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_root_password" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-change-root-password queue-response-spec
  "Change Root Password
  Triggers a root password reset for the QuickServer."
  [id int?]
  (let [res (:data (post-qs-change-root-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-change-timezone-with-http-info any?
  "Change QuickServer Timezone
  Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first."
  [id int?, timezone string?]
  (check-required-params id timezone)
  (call-api "/qs/{id}/change_timezone" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {"timezone" timezone }
             :content-types ["multipart/form-data" "application/json"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-change-timezone queue-response-spec
  "Change QuickServer Timezone
  Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first."
  [id int?, timezone string?]
  (let [res (:data (post-qs-change-timezone-with-http-info id timezone))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-change-webuzo-password-with-http-info any?
  "Change Webuzo Password
  Resets the Webuzo control panel password for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/change_webuzo_password" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-change-webuzo-password queue-response-spec
  "Change Webuzo Password
  Resets the Webuzo control panel password for the QuickServer."
  [id int?]
  (let [res (:data (post-qs-change-webuzo-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-insert-cd-with-http-info any?
  "Insert CD in QuickServer
  Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/insert_cd" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-insert-cd queue-response-spec
  "Insert CD in QuickServer
  Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images."
  [id int?]
  (let [res (:data (post-qs-insert-cd-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-reinstall-os-with-http-info any?
  "Reinstall QuickServer OS
  Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/reinstall_os" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-reinstall-os queue-response-spec
  "Reinstall QuickServer OS
  Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server."
  [id int?]
  (let [res (:data (post-qs-reinstall-os-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-reset-password-with-http-info any?
  "Reset QuickServer Password
  Resets the root password on the QuickServer to a new randomly generated password."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/reset_password" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-reset-password queue-response-spec
  "Reset QuickServer Password
  Resets the root password on the QuickServer to a new randomly generated password."
  [id int?]
  (let [res (:data (post-qs-reset-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-reverse-dns-with-http-info any?
  "Update Reverse DNS
  Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses."
  [id int?, reverse-dns-entries reverse-dns-entries]
  (check-required-params id reverse-dns-entries)
  (call-api "/qs/{id}/reverse_dns" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    reverse-dns-entries
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-reverse-dns text-response-spec
  "Update Reverse DNS
  Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses."
  [id int?, reverse-dns-entries reverse-dns-entries]
  (let [res (:data (post-qs-reverse-dns-with-http-info id reverse-dns-entries))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-setup-vnc-with-http-info any?
  "Setup VNC
  Sets up or refreshes the VNC console connection for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/setup_vnc" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-setup-vnc queue-response-spec
  "Setup VNC
  Sets up or refreshes the VNC console connection for the QuickServer."
  [id int?]
  (let [res (:data (post-qs-setup-vnc-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-qs-traffic-usage-with-http-info any?
  "Search Traffic Usage
  Searches and filters the QuickServer's bandwidth traffic usage data by date range."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/traffic_usage" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-traffic-usage any?
  "Search Traffic Usage
  Searches and filters the QuickServer's bandwidth traffic usage data by date range."
  [id int?]
  (let [res (:data (post-qs-traffic-usage-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-qs-view-desktop-with-http-info any?
  "Update View Desktop
  Updates or refreshes the remote desktop session for the QuickServer."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}/view_desktop" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-qs-view-desktop any?
  "Update View Desktop
  Updates or refreshes the remote desktop session for the QuickServer."
  [id int?]
  (let [res (:data (post-qs-view-desktop-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-quick-server-restore-with-http-info any?
  "Restore QuickServer from Backup
  Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names."
  [id int?, restore-request restore-request]
  (check-required-params id restore-request)
  (call-api "/qs/{id}/restore" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    restore-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-quick-server-restore queue-response-spec
  "Restore QuickServer from Backup
  Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names."
  [id int?, restore-request restore-request]
  (let [res (:data (post-quick-server-restore-with-http-info id restore-request))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec put-qs-with-http-info any?
  "Validate QuickServer Order
  Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order."
  []
  (call-api "/qs/order" :put
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec put-qs any?
  "Validate QuickServer Order
  Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order."
  []
  (let [res (:data (put-qs-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec quickservers-cancel-with-http-info any?
  "Cancel QuickServer Order
  Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle."
  [id int?]
  (check-required-params id)
  (call-api "/qs/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec quickservers-cancel quickservers-cancel-200-response-spec
  "Cancel QuickServer Order
  Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle."
  [id int?]
  (let [res (:data (quickservers-cancel-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode quickservers-cancel-200-response-spec res st/string-transformer)
       res)))


(defn-spec update-qs-info-with-http-info any?
  "Update QuickServer Order
  Updates QuickServer metadata or stored settings associated with the order."
  [id string?]
  (check-required-params id)
  (call-api "/qs/{id}" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-qs-info any?
  "Update QuickServer Order
  Updates QuickServer metadata or stored settings associated with the order."
  [id string?]
  (let [res (:data (update-qs-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


