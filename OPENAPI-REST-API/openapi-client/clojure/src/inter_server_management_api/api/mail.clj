(ns inter-server-management-api.api.mail
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


(defn-spec add-mail-with-http-info any?
  "Place Mail Order
  Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment."
  []
  (call-api "/mail/order" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec add-mail any?
  "Place Mail Order
  Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment."
  []
  (let [res (:data (add-mail-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec add-rule-with-http-info any?
  "Create Deny Rule
  Adds a new deny rule to automatically block emails that match the specified criteria."
  [id int?, deny-rule-new deny-rule-new]
  (check-required-params id deny-rule-new)
  (call-api "/mail/{id}/rules" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    deny-rule-new
             :content-types ["application/json" "application/x-www-form-urlencoded"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec add-rule generic-response-spec
  "Create Deny Rule
  Adds a new deny rule to automatically block emails that match the specified criteria."
  [id int?, deny-rule-new deny-rule-new]
  (let [res (:data (add-rule-with-http-info id deny-rule-new))]
    (if (:decode-models *api-context*)
       (st/decode generic-response-spec res st/string-transformer)
       res)))


(defn-spec create-mail-alert-with-http-info any?
  "Create Mail Alert
  Creates a new alert for the mail service, such as delivery or quota notifications."
  [id int?, mail-alert-request mail-alert-request]
  (check-required-params id mail-alert-request)
  (call-api "/mail/{id}/alerts" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    mail-alert-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec create-mail-alert success-text-response-spec
  "Create Mail Alert
  Creates a new alert for the mail service, such as delivery or quota notifications."
  [id int?, mail-alert-request mail-alert-request]
  (let [res (:data (create-mail-alert-with-http-info id mail-alert-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec delete-mail-alert-with-http-info any?
  "Delete Mail Alert
  Deletes an existing alert definition for the mail service."
  [id int?, alert_id int?]
  (check-required-params id alert_id)
  (call-api "/mail/{id}/alerts" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {"alert_id" alert_id }
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec delete-mail-alert success-text-response-spec
  "Delete Mail Alert
  Deletes an existing alert definition for the mail service."
  [id int?, alert_id int?]
  (let [res (:data (delete-mail-alert-with-http-info id alert_id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec delete-rule-with-http-info any?
  "Delete Deny Rule
  Removes a deny rule from the mail service."
  [id int?, rule string?]
  (check-required-params id rule)
  (call-api "/mail/{id}/rules/{rule}" :delete
            {:path-params   {"id" id "rule" rule }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec delete-rule generic-response-spec
  "Delete Deny Rule
  Removes a deny rule from the mail service."
  [id int?, rule string?]
  (let [res (:data (delete-rule-with-http-info id rule))]
    (if (:decode-models *api-context*)
       (st/decode generic-response-spec res st/string-transformer)
       res)))


(defn-spec delist-block-with-http-info any?
  "Remove Email Address from Block List
  Removes an email address from the mail service's block lists."
  ([id int?, ] (delist-block-with-http-info id nil))
  ([id int?, {:keys [email]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/mail/{id}/blocks/delete" :post
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {}
              :form-params   {"email" email }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec delist-block generic-response-spec
  "Remove Email Address from Block List
  Removes an email address from the mail service's block lists."
  ([id int?, ] (delist-block id nil))
  ([id int?, optional-params any?]
   (let [res (:data (delist-block-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode generic-response-spec res st/string-transformer)
        res))))


(defn-spec get-mail-alerts-with-http-info any?
  "List Mail Alerts
  Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/alerts" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-alerts mail-alerts-response-spec
  "List Mail Alerts
  Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts."
  [id int?]
  (let [res (:data (get-mail-alerts-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode mail-alerts-response-spec res st/string-transformer)
       res)))


(defn-spec get-mail-blocks-with-http-info any?
  "List Blocked Email Addresses
  Displays a listing of the blocked email addresses"
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/blocks" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-blocks mail-blocks-spec
  "List Blocked Email Addresses
  Displays a listing of the blocked email addresses"
  [id int?]
  (let [res (:data (get-mail-blocks-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode mail-blocks-spec res st/string-transformer)
       res)))


(defn-spec get-mail-delist-with-http-info any?
  "Get Delist Status
  Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/delist" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-delist mail-delist-response-spec
  "Get Delist Status
  Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks."
  [id int?]
  (let [res (:data (get-mail-delist-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode mail-delist-response-spec res st/string-transformer)
       res)))


(defn-spec get-mail-deliverability-with-http-info any?
  "Get Deliverability Metrics
  Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/deliverability" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-deliverability mail-deliverability-response-spec
  "Get Deliverability Metrics
  Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender."
  [id int?]
  (let [res (:data (get-mail-deliverability-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode mail-deliverability-response-spec res st/string-transformer)
       res)))


(defn-spec get-mail-info-with-http-info any?
  "Get Mail Order
  Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-info mail-schema-spec
  "Get Mail Order
  Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client."
  [id int?]
  (let [res (:data (get-mail-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode mail-schema-spec res st/string-transformer)
       res)))


(defn-spec get-mail-invoices-with-http-info any?
  "Get Mail Invoices
  Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/invoices" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-invoices charge-invoice-rows-spec
  "Get Mail Invoices
  Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment."
  [id int?]
  (let [res (:data (get-mail-invoices-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode charge-invoice-rows-spec res st/string-transformer)
       res)))


(defn-spec get-mail-list-with-http-info any?
  "List Mail Orders
  Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics."
  []
  (call-api "/mail" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-list (s/coll-of mail-row-spec)
  "List Mail Orders
  Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics."
  []
  (let [res (:data (get-mail-list-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of mail-row-spec) res st/string-transformer)
       res)))


(defn-spec get-mail-welcome-email-with-http-info any?
  "Resend Mail Welcome Email
  Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/welcome_email" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mail-welcome-email success-text-response-spec
  "Resend Mail Welcome Email
  Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions."
  [id int?]
  (let [res (:data (get-mail-welcome-email-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec get-new-mail-with-http-info any?
  "Get Mail Ordering Information
  Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order."
  []
  (call-api "/mail/order" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-new-mail mail-order-spec
  "Get Mail Ordering Information
  Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order."
  []
  (let [res (:data (get-new-mail-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode mail-order-spec res st/string-transformer)
       res)))


(defn-spec get-rules-with-http-info any?
  "List Deny Rules
  Returns a listing of all the deny block rules configured for this mail service."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/rules" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-rules (s/coll-of deny-rule-record-spec)
  "List Deny Rules
  Returns a listing of all the deny block rules configured for this mail service."
  [id int?]
  (let [res (:data (get-rules-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of deny-rule-record-spec) res st/string-transformer)
       res)))


(defn-spec get-stats-with-http-info any?
  "Get Mail Usage Statistics
  Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption."
  ([id int?, ] (get-stats-with-http-info id nil))
  ([id int?, {:keys [time]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/mail/{id}/stats" :get
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"time" time }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-stats mail-stats-type-spec
  "Get Mail Usage Statistics
  Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption."
  ([id int?, ] (get-stats id nil))
  ([id int?, optional-params any?]
   (let [res (:data (get-stats-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode mail-stats-type-spec res st/string-transformer)
        res))))


(defn-spec mail-cancel-with-http-info any?
  "Cancel Mail
  Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec mail-cancel mail-cancel-200-response-spec
  "Cancel Mail
  Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred."
  [id int?]
  (let [res (:data (mail-cancel-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode mail-cancel-200-response-spec res st/string-transformer)
       res)))


(defn-spec post-mail-delist-with-http-info any?
  "Delist a Blocked Sender
  Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response."
  [id int?, mail-delist-request mail-delist-request]
  (check-required-params id mail-delist-request)
  (call-api "/mail/{id}/delist" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    mail-delist-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-mail-delist success-text-response-spec
  "Delist a Blocked Sender
  Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response."
  [id int?, mail-delist-request mail-delist-request]
  (let [res (:data (post-mail-delist-with-http-info id mail-delist-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec put-mail-with-http-info any?
  "Validate Mail Order
  Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order."
  []
  (call-api "/mail/order" :put
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec put-mail any?
  "Validate Mail Order
  Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order."
  []
  (let [res (:data (put-mail-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec reset-mail-password-with-http-info any?
  "Reset Mail Password
  Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset."
  [id int?]
  (check-required-params id)
  (call-api "/mail/{id}/reset_password" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec reset-mail-password success-text-response-spec
  "Reset Mail Password
  Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset."
  [id int?]
  (let [res (:data (reset-mail-password-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec send-adv-mail-with-http-info any?
  "Send Email with Advanced Options
  Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`."
  [id int?, send-mail-adv send-mail-adv]
  (check-required-params id send-mail-adv)
  (call-api "/mail/{id}/advsend" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    send-mail-adv
             :content-types ["application/json" "application/x-www-form-urlencoded"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec send-adv-mail generic-response-spec
  "Send Email with Advanced Options
  Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`."
  [id int?, send-mail-adv send-mail-adv]
  (let [res (:data (send-adv-mail-with-http-info id send-mail-adv))]
    (if (:decode-models *api-context*)
       (st/decode generic-response-spec res st/string-transformer)
       res)))


(defn-spec send-mail-with-http-info any?
  "Send Email
  Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead."
  [id int?, send-mail send-mail]
  (check-required-params id send-mail)
  (call-api "/mail/{id}/send" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    send-mail
             :content-types ["application/json" "application/x-www-form-urlencoded"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec send-mail generic-response-spec
  "Send Email
  Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead."
  [id int?, send-mail send-mail]
  (let [res (:data (send-mail-with-http-info id send-mail))]
    (if (:decode-models *api-context*)
       (st/decode generic-response-spec res st/string-transformer)
       res)))


(defn-spec update-mail-alert-with-http-info any?
  "Update Mail Alert
  Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields."
  [id int?, mail-alert-update-request mail-alert-update-request]
  (check-required-params id mail-alert-update-request)
  (call-api "/mail/{id}/alerts" :put
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    mail-alert-update-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-mail-alert success-text-response-spec
  "Update Mail Alert
  Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields."
  [id int?, mail-alert-update-request mail-alert-update-request]
  (let [res (:data (update-mail-alert-with-http-info id mail-alert-update-request))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec update-mail-info-with-http-info any?
  "Update Mail Order
  Updates mail service metadata for the order, such as stored settings or account details."
  [id string?]
  (check-required-params id)
  (call-api "/mail/{id}" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-mail-info any?
  "Update Mail Order
  Updates mail service metadata for the order, such as stored settings or account details."
  [id string?]
  (let [res (:data (update-mail-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec view-mail-log-with-http-info any?
  "View Mail Log
  Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status."
  ([id int?, ] (view-mail-log-with-http-info id nil))
  ([id int?, {:keys [id2 origin mx from to subject mailid skip limit startDate endDate delivered]} (s/map-of keyword? any?)]
   (check-required-params id)
   (call-api "/mail/{id}/log" :get
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {"id" id2 "origin" origin "mx" mx "from" from "to" to "subject" subject "mailid" mailid "skip" skip "limit" limit "startDate" startDate "endDate" endDate "delivered" delivered }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec view-mail-log mail-log-spec
  "View Mail Log
  Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status."
  ([id int?, ] (view-mail-log id nil))
  ([id int?, optional-params any?]
   (let [res (:data (view-mail-log-with-http-info id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode mail-log-spec res st/string-transformer)
        res))))


