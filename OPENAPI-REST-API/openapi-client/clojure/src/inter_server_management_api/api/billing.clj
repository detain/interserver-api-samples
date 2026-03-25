(ns inter-server-management-api.api.billing
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


(defn-spec add-account-credit-card-with-http-info any?
  "Add Credit Card to Account
  Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method."
  ([] (add-account-credit-card-with-http-info nil))
  ([{:keys [name address city state country zip cc cc_exp cc_ccv2]} (s/map-of keyword? any?)]
   (call-api "/account/creditcards" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {"name" name "address" address "city" city "state" state "country" country "zip" zip "cc" cc "cc_exp" cc_exp "cc_ccv2" cc_ccv2 }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec add-account-credit-card success-text-response-spec
  "Add Credit Card to Account
  Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method."
  ([] (add-account-credit-card nil))
  ([optional-params any?]
   (let [res (:data (add-account-credit-card-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode success-text-response-spec res st/string-transformer)
        res))))


(defn-spec add-billing-credit-card-with-http-info any?
  "Add Credit Card for Billing
  Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments."
  [billing-add-cc-request billing-add-cc-request]
  (check-required-params billing-add-cc-request)
  (call-api "/billing/creditcards" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    billing-add-cc-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec add-billing-credit-card success-text-response-spec
  "Add Credit Card for Billing
  Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments."
  [billing-add-cc-request billing-add-cc-request]
  (let [res (:data (add-billing-credit-card-with-http-info billing-add-cc-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec add-billing-prepay-with-http-info any?
  "Create Prepay Deposit
  Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details."
  [billing-prepay-request billing-prepay-request]
  (check-required-params billing-prepay-request)
  (call-api "/billing/prepays" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    billing-prepay-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec add-billing-prepay success-text-response-spec
  "Create Prepay Deposit
  Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details."
  [billing-prepay-request billing-prepay-request]
  (let [res (:data (add-billing-prepay-with-http-info billing-prepay-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec delete-account-credit-card-with-http-info any?
  "Remove Credit Card
  Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward."
  [id string?]
  (check-required-params id)
  (call-api "/account/creditcards/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec delete-account-credit-card any?
  "Remove Credit Card
  Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward."
  [id string?]
  (let [res (:data (delete-account-credit-card-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec delete-billing-credit-card-with-http-info any?
  "Delete Credit Card
  Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card."
  [id int?]
  (check-required-params id)
  (call-api "/billing/creditcards/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec delete-billing-credit-card success-text-response-spec
  "Delete Credit Card
  Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card."
  [id int?]
  (let [res (:data (delete-billing-credit-card-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec delete-billing-invoice-with-http-info any?
  "Delete Invoice
  Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up."
  [id int?]
  (check-required-params id)
  (call-api "/billing/invoices/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec delete-billing-invoice success-text-response-spec
  "Delete Invoice
  Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up."
  [id int?]
  (let [res (:data (delete-billing-invoice-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec delete-billing-prepay-with-http-info any?
  "Delete Prepay Balance
  Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs."
  [id int?]
  (check-required-params id)
  (call-api "/billing/prepays/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec delete-billing-prepay success-text-response-spec
  "Delete Prepay Balance
  Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs."
  [id int?]
  (let [res (:data (delete-billing-prepay-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec get-affiliate-banners-with-http-info any?
  "List Affiliate Banner Assets
  Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes."
  []
  (call-api "/affiliate/banners" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-affiliate-banners (s/coll-of affiliate-banner-row-spec)
  "List Affiliate Banner Assets
  Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes."
  []
  (let [res (:data (get-affiliate-banners-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of affiliate-banner-row-spec) res st/string-transformer)
       res)))


(defn-spec get-affiliate-rich-report-with-http-info any?
  "Get Affiliate Performance Report
  Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request."
  []
  (call-api "/affiliate/rich_report" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-affiliate-rich-report text-response-spec
  "Get Affiliate Performance Report
  Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request."
  []
  (let [res (:data (get-affiliate-rich-report-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec get-affiliate-sales-graph-with-http-info any?
  "Get Affiliate Sales Graph Data
  Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period."
  ([] (get-affiliate-sales-graph-with-http-info nil))
  ([{:keys [days]} (s/map-of keyword? any?)]
   (call-api "/affiliate/sales_graph" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"days" days }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-affiliate-sales-graph status-monthly-breakdown-spec
  "Get Affiliate Sales Graph Data
  Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period."
  ([] (get-affiliate-sales-graph nil))
  ([optional-params any?]
   (let [res (:data (get-affiliate-sales-graph-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode status-monthly-breakdown-spec res st/string-transformer)
        res))))


(defn-spec get-affiliate-sales-report-with-http-info any?
  "Get Affiliate Sales Report
  Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders."
  []
  (call-api "/affiliate/sales_report" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-affiliate-sales-report text-response-spec
  "Get Affiliate Sales Report
  Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders."
  []
  (let [res (:data (get-affiliate-sales-report-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec get-affiliate-traffic-graph-with-http-info any?
  "Get Affiliate Traffic Graph Data
  Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period."
  ([] (get-affiliate-traffic-graph-with-http-info nil))
  ([{:keys [days]} (s/map-of keyword? any?)]
   (call-api "/affiliate/traffic_graph" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"days" days }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-affiliate-traffic-graph monthly-counts-spec
  "Get Affiliate Traffic Graph Data
  Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period."
  ([] (get-affiliate-traffic-graph nil))
  ([optional-params any?]
   (let [res (:data (get-affiliate-traffic-graph-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode monthly-counts-spec res st/string-transformer)
        res))))


(defn-spec get-affiliate-web-traffic-with-http-info any?
  "List Affiliate Web Traffic Entries
  Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns."
  []
  (call-api "/affiliate/web_traffic" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-affiliate-web-traffic (s/coll-of affiliate-traffic-row-spec)
  "List Affiliate Web Traffic Entries
  Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns."
  []
  (let [res (:data (get-affiliate-web-traffic-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of affiliate-traffic-row-spec) res st/string-transformer)
       res)))


(defn-spec get-billing-cart-with-http-info any?
  "Get Shopping Cart Contents
  Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`."
  []
  (call-api "/billing/cart" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-billing-cart any?
  "Get Shopping Cart Contents
  Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`."
  []
  (let [res (:data (get-billing-cart-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-billing-credit-card-verify-with-http-info any?
  "Get Credit Card Verification Requirements
  Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user."
  [id int?]
  (check-required-params id)
  (call-api "/billing/creditcards/{id}/verify" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-billing-credit-card-verify success-text-response-spec
  "Get Credit Card Verification Requirements
  Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user."
  [id int?]
  (let [res (:data (get-billing-credit-card-verify-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec get-billing-invoice-with-http-info any?
  "Get Invoice Details
  Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid."
  [id int?]
  (check-required-params id)
  (call-api "/billing/invoices/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-billing-invoice billing-invoice-detail-spec
  "Get Invoice Details
  Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid."
  [id int?]
  (let [res (:data (get-billing-invoice-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode billing-invoice-detail-spec res st/string-transformer)
       res)))


(defn-spec get-billing-invoices-with-http-info any?
  "List Account Invoices
  Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment."
  []
  (call-api "/billing/invoices" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-billing-invoices billing-invoice-list-spec
  "List Account Invoices
  Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment."
  []
  (let [res (:data (get-billing-invoices-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode billing-invoice-list-spec res st/string-transformer)
       res)))


(defn-spec get-billing-pre-pays-with-http-info any?
  "List Prepay Balances
  Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method."
  []
  (call-api "/billing/prepays" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-billing-pre-pays any?
  "List Prepay Balances
  Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method."
  []
  (let [res (:data (get-billing-pre-pays-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-invoices-with-http-info any?
  "Get Invoices
  Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination."
  ([] (get-invoices-with-http-info nil))
  ([{:keys [searchString skip limit]} (s/map-of keyword? any?)]
   (call-api "/invoices" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"searchString" searchString "skip" skip "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-invoices (s/coll-of invoice-spec)
  "Get Invoices
  Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination."
  ([] (get-invoices nil))
  ([optional-params any?]
   (let [res (:data (get-invoices-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of invoice-spec) res st/string-transformer)
        res))))


(defn-spec initiate-payment-with-http-info any?
  "Initiate Payment
  Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`."
  [method string?, invoices string?]
  (check-required-params method invoices)
  (call-api "/pay/{method}/{invoices}" :get
            {:path-params   {"method" method "invoices" invoices }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec initiate-payment initiate-payment-200-response-spec
  "Initiate Payment
  Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`."
  [method string?, invoices string?]
  (let [res (:data (initiate-payment-with-http-info method invoices))]
    (if (:decode-models *api-context*)
       (st/decode initiate-payment-200-response-spec res st/string-transformer)
       res)))


(defn-spec post-billing-credit-card-verify-with-http-info any?
  "Submit Credit Card Verification
  Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`."
  [id int?, billing-verify-cc-request billing-verify-cc-request]
  (check-required-params id billing-verify-cc-request)
  (call-api "/billing/creditcards/{id}/verify" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    billing-verify-cc-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-billing-credit-card-verify success-text-response-spec
  "Submit Credit Card Verification
  Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`."
  [id int?, billing-verify-cc-request billing-verify-cc-request]
  (let [res (:data (post-billing-credit-card-verify-with-http-info id billing-verify-cc-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec update-account-credit-card-with-http-info any?
  "Update Credit Card
  Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address."
  [id int?]
  (check-required-params id)
  (call-api "/account/creditcards/{id}" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-account-credit-card any?
  "Update Credit Card
  Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address."
  [id int?]
  (let [res (:data (update-account-credit-card-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec update-affiliate-dock-setup-with-http-info any?
  "Configure Affiliate Dock Settings
  Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text."
  ([] (update-affiliate-dock-setup-with-http-info nil))
  ([{:keys [affiliate_dock_title affiliate_dock_description referrer_coupon]} (s/map-of keyword? any?)]
   (call-api "/affiliate/dock_setup" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {"affiliate_dock_title" affiliate_dock_title "affiliate_dock_description" affiliate_dock_description "referrer_coupon" referrer_coupon }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec update-affiliate-dock-setup text-response-spec
  "Configure Affiliate Dock Settings
  Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text."
  ([] (update-affiliate-dock-setup nil))
  ([optional-params any?]
   (let [res (:data (update-affiliate-dock-setup-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode text-response-spec res st/string-transformer)
        res))))


(defn-spec update-affiliate-landing-page-with-http-info any?
  "Configure Affiliate Landing Page
  Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately."
  ([] (update-affiliate-landing-page-with-http-info nil))
  ([{:keys [affiliate_dock_title affiliate_dock_description referrer_coupon]} (s/map-of keyword? any?)]
   (call-api "/affiliate/landing_pg" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {"affiliate_dock_title" affiliate_dock_title "affiliate_dock_description" affiliate_dock_description "referrer_coupon" referrer_coupon }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec update-affiliate-landing-page text-response-spec
  "Configure Affiliate Landing Page
  Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately."
  ([] (update-affiliate-landing-page nil))
  ([optional-params any?]
   (let [res (:data (update-affiliate-landing-page-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode text-response-spec res st/string-transformer)
        res))))


(defn-spec update-affiliate-payment-setup-with-http-info any?
  "Configure Affiliate Payout Preferences
  Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account."
  ([] (update-affiliate-payment-setup-with-http-info nil))
  ([{:keys [affiliate_paypal affiliate_payment_method]} (s/map-of keyword? any?)]
   (call-api "/affiliate/payment_setup" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {"affiliate_paypal" affiliate_paypal "affiliate_payment_method" affiliate_payment_method }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec update-affiliate-payment-setup text-response-spec
  "Configure Affiliate Payout Preferences
  Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account."
  ([] (update-affiliate-payment-setup nil))
  ([optional-params any?]
   (let [res (:data (update-affiliate-payment-setup-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode text-response-spec res st/string-transformer)
        res))))


(defn-spec update-billing-credit-card-with-http-info any?
  "Update Credit Card Details
  Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card."
  [id int?]
  (check-required-params id)
  (call-api "/billing/creditcards/{id}" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-billing-credit-card success-text-response-spec
  "Update Credit Card Details
  Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card."
  [id int?]
  (let [res (:data (update-billing-credit-card-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec update-billing-payment-method-with-http-info any?
  "Update Default Payment Method
  Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available."
  [billing-payment-method-request billing-payment-method-request]
  (check-required-params billing-payment-method-request)
  (call-api "/billing/payment_method" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    billing-payment-method-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-billing-payment-method success-text-response-spec
  "Update Default Payment Method
  Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available."
  [billing-payment-method-request billing-payment-method-request]
  (let [res (:data (update-billing-payment-method-with-http-info billing-payment-method-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


