(ns inter-server-management-api.api.vps
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


(defn-spec add-vps-with-http-info any?
  "Place VPS Order
  Places an order for a new VPS. Use `PUT /vps/order` to validate the order first."
  ([] (add-vps-with-http-info nil))
  ([{:keys [vps-order-post-request]} (s/map-of keyword? any?)]
   (call-api "/vps/order" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    vps-order-post-request
              :content-types ["application/json" "multipart/form-data"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec add-vps any?
  "Place VPS Order
  Places an order for a new VPS. Use `PUT /vps/order` to validate the order first."
  ([] (add-vps nil))
  ([optional-params any?]
   (let [res (:data (add-vps-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec delete-vps-backup-with-http-info any?
  "Delete VPS Backup
  Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting."
  ([id int?, file string?, ] (delete-vps-backup-with-http-info id file nil))
  ([id int?, file string?, {:keys [all]} (s/map-of keyword? any?)]
   (check-required-params id file)
   (call-api "/vps/{id}/backups" :delete
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"all" all "file" file }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec delete-vps-backup success-text-response-spec
  "Delete VPS Backup
  Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting."
  ([id int?, file string?, ] (delete-vps-backup id file nil))
  ([id int?, file string?, optional-params any?]
   (let [res (:data (delete-vps-backup-with-http-info id file optional-params))]
     (if (:decode-models *api-context*)
        (st/decode success-text-response-spec res st/string-transformer)
        res))))


(defn-spec do-vps-block-smtp-with-http-info any?
  "Blocks SMTP
  Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/block_smtp" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-block-smtp queue-response-spec
  "Blocks SMTP
  Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email."
  [id int?]
  (let [res (:data (do-vps-block-smtp-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-disable-cd-with-http-info any?
  "Disable CD Drive
  Disables the virtual CD drive on the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/disable_cd" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-disable-cd queue-response-spec
  "Disable CD Drive
  Disables the virtual CD drive on the VPS."
  [id int?]
  (let [res (:data (do-vps-disable-cd-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-disable-quota-with-http-info any?
  "Disable Quotas
  Disables disk quota enforcement on the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/disable_quota" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-disable-quota queue-response-spec
  "Disable Quotas
  Disables disk quota enforcement on the VPS."
  [id int?]
  (let [res (:data (do-vps-disable-quota-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-eject-cd-with-http-info any?
  "Eject CD Drive
  Ejects the virtual CD from the VPS CD drive."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/eject_cd" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-eject-cd queue-response-spec
  "Eject CD Drive
  Ejects the virtual CD from the VPS CD drive."
  [id int?]
  (let [res (:data (do-vps-eject-cd-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-enable-quota-with-http-info any?
  "Enable Quotas
  Enables disk quota enforcement on the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/enable_quota" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-enable-quota queue-response-spec
  "Enable Quotas
  Enables disk quota enforcement on the VPS."
  [id int?]
  (let [res (:data (do-vps-enable-quota-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-restart-with-http-info any?
  "Restart VPS
  Restarts the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/restart" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-restart queue-response-spec
  "Restart VPS
  Restarts the VPS."
  [id int?]
  (let [res (:data (do-vps-restart-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-start-with-http-info any?
  "Start VPS
  Powers on the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/start" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-start queue-response-spec
  "Start VPS
  Powers on the VPS."
  [id int?]
  (let [res (:data (do-vps-start-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec do-vps-stop-with-http-info any?
  "Stop VPS
  Powers off the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/stop" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec do-vps-stop queue-response-spec
  "Stop VPS
  Powers off the VPS."
  [id int?]
  (let [res (:data (do-vps-stop-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec download-vps-backup-with-http-info any?
  "Download VPS Backup
  Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames."
  ([id int?, download-qs-backup-request download-qs-backup-request, ] (download-vps-backup-with-http-info id download-qs-backup-request nil))
  ([id int?, download-qs-backup-request download-qs-backup-request, {:keys [all]} (s/map-of keyword? any?)]
   (check-required-params id download-qs-backup-request)
   (call-api "/vps/{id}/backups" :patch
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"all" all }
              :form-params   {}
              :body-param    download-qs-backup-request
              :content-types ["application/json" "multipart/form-data"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec download-vps-backup download-qs-backup-200-response-spec
  "Download VPS Backup
  Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames."
  ([id int?, download-qs-backup-request download-qs-backup-request, ] (download-vps-backup id download-qs-backup-request nil))
  ([id int?, download-qs-backup-request download-qs-backup-request, optional-params any?]
   (let [res (:data (download-vps-backup-with-http-info id download-qs-backup-request optional-params))]
     (if (:decode-models *api-context*)
        (st/decode download-qs-backup-200-response-spec res st/string-transformer)
        res))))


(defn-spec get-new-vps-with-http-info any?
  "VPS Ordering Information
  Retrieves available VPS configurations, OS templates, and pricing for ordering."
  []
  (call-api "/vps/order" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-new-vps vps-order-spec
  "VPS Ordering Information
  Retrieves available VPS configurations, OS templates, and pricing for ordering."
  []
  (let [res (:data (get-new-vps-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode vps-order-spec res st/string-transformer)
       res)))


(defn-spec get-vps-backups-with-http-info any?
  "Get VPS Backups List
  Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup."
  ([id int?, ] (get-vps-backups-with-http-info id nil))
  ([id int?, {:keys [all]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/vps/{id}/backups" :get
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"all" all }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-vps-backups vps-backup-rows-spec
  "Get VPS Backups List
  Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup."
  ([id int?, ] (get-vps-backups id nil))
  ([id int?, optional-params any?]
   (let [res (:data (get-vps-backups-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode vps-backup-rows-spec res st/string-transformer)
        res))))


(defn-spec get-vps-buy-hd-space-with-http-info any?
  "HD Space Addon Info
  Returns available hard drive space addon options and pricing for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/buy_hd_space" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-buy-hd-space any?
  "HD Space Addon Info
  Returns available hard drive space addon options and pricing for the VPS."
  [id int?]
  (let [res (:data (get-vps-buy-hd-space-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-vps-buy-ip-with-http-info any?
  "Additional IP Addon Info
  Returns available additional IP address options and pricing for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/buy_ip" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-buy-ip any?
  "Additional IP Addon Info
  Returns available additional IP address options and pricing for the VPS."
  [id int?]
  (let [res (:data (get-vps-buy-ip-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-vps-change-timezone-with-http-info any?
  "Get Timezone Info
  Returns the list of available timezones that can be set on the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/change_timezone" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-change-timezone (s/coll-of string?)
  "Get Timezone Info
  Returns the list of available timezones that can be set on the VPS."
  [id int?]
  (let [res (:data (get-vps-change-timezone-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of string?) res st/string-transformer)
       res)))


(defn-spec get-vps-info-with-http-info any?
  "Get VPS Order
  Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-info vps-spec
  "Get VPS Order
  Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation."
  [id int?]
  (let [res (:data (get-vps-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode vps-spec res st/string-transformer)
       res)))


(defn-spec get-vps-invoices-with-http-info any?
  "Get VPS Invoices
  Returns the billing invoices associated with this VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/invoices" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-invoices charge-invoice-rows-spec
  "Get VPS Invoices
  Returns the billing invoices associated with this VPS."
  [id int?]
  (let [res (:data (get-vps-invoices-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode charge-invoice-rows-spec res st/string-transformer)
       res)))


(defn-spec get-vps-list-with-http-info any?
  "List VPS Orders
  Returns all VPS services on the account with their current status and configuration."
  []
  (call-api "/vps" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-list (s/coll-of vps-row-spec)
  "List VPS Orders
  Returns all VPS services on the account with their current status and configuration."
  []
  (let [res (:data (get-vps-list-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of vps-row-spec) res st/string-transformer)
       res)))


(defn-spec get-vps-reinstall-os-with-http-info any?
  "VPS Reinstall OS Options
  Returns the list of available OS templates for reinstalling the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/reinstall_os" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-reinstall-os vps-templates-list-spec
  "VPS Reinstall OS Options
  Returns the list of available OS templates for reinstalling the VPS."
  [id int?]
  (let [res (:data (get-vps-reinstall-os-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode vps-templates-list-spec res st/string-transformer)
       res)))


(defn-spec get-vps-reverse-dns-with-http-info any?
  "Reverse DNS Info
  Returns the current reverse DNS (PTR record) entries for the VPS IP addresses."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/reverse_dns" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-reverse-dns reverse-dns-entries-spec
  "Reverse DNS Info
  Returns the current reverse DNS (PTR record) entries for the VPS IP addresses."
  [id int?]
  (let [res (:data (get-vps-reverse-dns-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode reverse-dns-entries-spec res st/string-transformer)
       res)))


(defn-spec get-vps-setup-vnc-with-http-info any?
  "VNC Setup Info
  Returns the current VNC connection information for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/setup_vnc" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-setup-vnc any?
  "VNC Setup Info
  Returns the current VNC connection information for the VPS."
  [id int?]
  (let [res (:data (get-vps-setup-vnc-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-vps-slices-with-http-info any?
  "Slice Upgrade Info
  Returns available slice upgrade options and pricing for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/slices" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-slices any?
  "Slice Upgrade Info
  Returns available slice upgrade options and pricing for the VPS."
  [id int?]
  (let [res (:data (get-vps-slices-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-vps-traffic-usage-with-http-info any?
  "Get Traffic Usage
  Returns bandwidth traffic usage data for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/traffic_usage" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-traffic-usage vps-traffic-response-spec
  "Get Traffic Usage
  Returns bandwidth traffic usage data for the VPS."
  [id int?]
  (let [res (:data (get-vps-traffic-usage-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode vps-traffic-response-spec res st/string-transformer)
       res)))


(defn-spec get-vps-view-desktop-with-http-info any?
  "Get View Desktop Info
  Returns remote desktop connection information for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/view_desktop" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-view-desktop any?
  "Get View Desktop Info
  Returns remote desktop connection information for the VPS."
  [id int?]
  (let [res (:data (get-vps-view-desktop-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec get-vps-welcome-email-with-http-info any?
  "Resend VPS Welcome Email
  Resends the welcome email containing connection details and credentials for the VPS order."
  [id string?]
  (check-required-params id)
  (call-api "/vps/{id}/welcome_email" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-vps-welcome-email success-text-response-spec
  "Resend VPS Welcome Email
  Resends the welcome email containing connection details and credentials for the VPS order."
  [id string?]
  (let [res (:data (get-vps-welcome-email-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-backup-with-http-info any?
  "Start a VPS Backup
  Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/backup" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-backup queue-response-spec
  "Start a VPS Backup
  Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints."
  [id int?]
  (let [res (:data (post-vps-backup-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-buy-hd-space-with-http-info any?
  "Purchase HD Space Addon
  Purchases additional hard drive space for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/buy_hd_space" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-buy-hd-space any?
  "Purchase HD Space Addon
  Purchases additional hard drive space for the VPS."
  [id int?]
  (let [res (:data (post-vps-buy-hd-space-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-vps-buy-ip-with-http-info any?
  "Purchase Additional IP
  Purchases an additional IP address for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/buy_ip" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-buy-ip any?
  "Purchase Additional IP
  Purchases an additional IP address for the VPS."
  [id int?]
  (let [res (:data (post-vps-buy-ip-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-vps-change-hostname-with-http-info any?
  "Update VPS Hostname
  Changes the hostname of the VPS. This queues a background task to update the server."
  ([id int?, ] (post-vps-change-hostname-with-http-info id nil))
  ([id int?, {:keys [hostname]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/vps/{id}/change_hostname" :post
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {}
              :form-params   {"hostname" hostname }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec post-vps-change-hostname queue-response-spec
  "Update VPS Hostname
  Changes the hostname of the VPS. This queues a background task to update the server."
  ([id int?, ] (post-vps-change-hostname id nil))
  ([id int?, optional-params any?]
   (let [res (:data (post-vps-change-hostname-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode queue-response-spec res st/string-transformer)
        res))))


(defn-spec post-vps-change-root-password-with-http-info any?
  "Change VPS Root Password
  Changes the root password of the VPS."
  [id int?, password string?]
  (check-required-params id password)
  (call-api "/vps/{id}/change_root_password" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {"password" password }
             :content-types ["multipart/form-data" "application/json"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-change-root-password queue-response-spec
  "Change VPS Root Password
  Changes the root password of the VPS."
  [id int?, password string?]
  (let [res (:data (post-vps-change-root-password-with-http-info id password))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-change-timezone-with-http-info any?
  "Change VPS Timezone
  Changes the system timezone on the VPS."
  [id int?, timezone string?]
  (check-required-params id timezone)
  (call-api "/vps/{id}/change_timezone" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {"timezone" timezone }
             :content-types ["multipart/form-data" "application/json"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-change-timezone queue-response-spec
  "Change VPS Timezone
  Changes the system timezone on the VPS."
  [id int?, timezone string?]
  (let [res (:data (post-vps-change-timezone-with-http-info id timezone))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-change-webuzo-password-with-http-info any?
  "Change Webuzo Password
  Changes the Webuzo control panel password on the VPS."
  [id int?, password string?]
  (check-required-params id password)
  (call-api "/vps/{id}/change_webuzo_password" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {"password" password }
             :content-types ["multipart/form-data" "application/json"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-change-webuzo-password queue-response-spec
  "Change Webuzo Password
  Changes the Webuzo control panel password on the VPS."
  [id int?, password string?]
  (let [res (:data (post-vps-change-webuzo-password-with-http-info id password))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-insert-cd-with-http-info any?
  "Insert CD in VPS
  Mounts an ISO image in the VPS virtual CD drive from the given URL."
  ([id int?, ] (post-vps-insert-cd-with-http-info id nil))
  ([id int?, {:keys [url]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/vps/{id}/insert_cd" :post
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {}
              :form-params   {"url" url }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec post-vps-insert-cd queue-response-spec
  "Insert CD in VPS
  Mounts an ISO image in the VPS virtual CD drive from the given URL."
  ([id int?, ] (post-vps-insert-cd id nil))
  ([id int?, optional-params any?]
   (let [res (:data (post-vps-insert-cd-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode queue-response-spec res st/string-transformer)
        res))))


(defn-spec post-vps-reinstall-os-with-http-info any?
  "Reinstall VPS OS
  Reinstalls the operating system on the VPS. Warning - all data will be erased."
  ([id int?, template string?, localPassword string?, ] (post-vps-reinstall-os-with-http-info id template localPassword nil))
  ([id int?, template string?, localPassword string?, {:keys [password]} (s/map-of keyword? any?)]
   (check-required-params id template localPassword)
   (call-api "/vps/{id}/reinstall_os" :post
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {}
              :form-params   {"template" template "password" password "localPassword" localPassword }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec post-vps-reinstall-os queue-response-spec
  "Reinstall VPS OS
  Reinstalls the operating system on the VPS. Warning - all data will be erased."
  ([id int?, template string?, localPassword string?, ] (post-vps-reinstall-os id template localPassword nil))
  ([id int?, template string?, localPassword string?, optional-params any?]
   (let [res (:data (post-vps-reinstall-os-with-http-info id template localPassword optional-params))]
     (if (:decode-models *api-context*)
        (st/decode queue-response-spec res st/string-transformer)
        res))))


(defn-spec post-vps-reset-password-with-http-info any?
  "Reset VPS Password
  Resets the root password on the VPS to a new randomly generated password."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/reset_password" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-reset-password queue-response-spec
  "Reset VPS Password
  Resets the root password on the VPS to a new randomly generated password."
  [id int?]
  (let [res (:data (post-vps-reset-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-restore-with-http-info any?
  "Restore VPS from Backup
  Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names."
  [id int?, restore-request restore-request]
  (check-required-params id restore-request)
  (call-api "/vps/{id}/restore" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    restore-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-restore queue-response-spec
  "Restore VPS from Backup
  Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names."
  [id int?, restore-request restore-request]
  (let [res (:data (post-vps-restore-with-http-info id restore-request))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-reverse-dns-with-http-info any?
  "Update Reverse DNS
  Updates the reverse DNS (PTR record) entries for the VPS IP addresses."
  [id int?, reverse-dns-entries reverse-dns-entries]
  (check-required-params id reverse-dns-entries)
  (call-api "/vps/{id}/reverse_dns" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    reverse-dns-entries
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-reverse-dns text-response-spec
  "Update Reverse DNS
  Updates the reverse DNS (PTR record) entries for the VPS IP addresses."
  [id int?, reverse-dns-entries reverse-dns-entries]
  (let [res (:data (post-vps-reverse-dns-with-http-info id reverse-dns-entries))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-setup-vnc-with-http-info any?
  "Setup VNC
  Sets up or refreshes the VNC console connection for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/setup_vnc" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-setup-vnc queue-response-spec
  "Setup VNC
  Sets up or refreshes the VNC console connection for the VPS."
  [id int?]
  (let [res (:data (post-vps-setup-vnc-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode queue-response-spec res st/string-transformer)
       res)))


(defn-spec post-vps-slices-with-http-info any?
  "Purchase Slice Upgrade
  Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/slices" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-slices any?
  "Purchase Slice Upgrade
  Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources."
  [id int?]
  (let [res (:data (post-vps-slices-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec post-vps-view-desktop-with-http-info any?
  "Update View Desktop
  Updates or refreshes the remote desktop session for the VPS."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}/view_desktop" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-vps-view-desktop any?
  "Update View Desktop
  Updates or refreshes the remote desktop session for the VPS."
  [id int?]
  (let [res (:data (post-vps-view-desktop-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec put-vps-with-http-info any?
  "Validate VPS Order
  Validates a VPS order before placing it. Returns cost breakdown and any validation errors."
  ([] (put-vps-with-http-info nil))
  ([{:keys [vps-order-put-request]} (s/map-of keyword? any?)]
   (call-api "/vps/order" :put
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    vps-order-put-request
              :content-types ["application/json" "multipart/form-data"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec put-vps vps-order-put-response-spec
  "Validate VPS Order
  Validates a VPS order before placing it. Returns cost breakdown and any validation errors."
  ([] (put-vps nil))
  ([optional-params any?]
   (let [res (:data (put-vps-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode vps-order-put-response-spec res st/string-transformer)
        res))))


(defn-spec update-vps-info-with-http-info any?
  "Update VPS Order
  Updates settings on a VPS order."
  [id string?]
  (check-required-params id)
  (call-api "/vps/{id}" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-vps-info any?
  "Update VPS Order
  Updates settings on a VPS order."
  [id string?]
  (let [res (:data (update-vps-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec v-ps-cancel-with-http-info any?
  "Cancel VPS Service
  Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle."
  [id int?]
  (check-required-params id)
  (call-api "/vps/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec v-ps-cancel vps-cancel-200-response-spec
  "Cancel VPS Service
  Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle."
  [id int?]
  (let [res (:data (v-ps-cancel-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode vps-cancel-200-response-spec res st/string-transformer)
       res)))


