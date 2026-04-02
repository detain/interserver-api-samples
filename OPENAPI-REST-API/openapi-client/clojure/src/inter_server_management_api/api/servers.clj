(ns inter-server-management-api.api.servers
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
            [inter-server-management-api.specs.add-server-200-response :refer :all]
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
            [inter-server-management-api.specs.service-order-post-response :refer :all]
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


(defn-spec add-server-with-http-info any?
  "Place Server Order
  Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first."
  []
  (call-api "/servers/order" :post
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec add-server add-server-200-response-spec
  "Place Server Order
  Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first."
  []
  (let [res (:data (add-server-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode add-server-200-response-spec res st/string-transformer)
       res)))


(defn-spec buy-it-now-server-order-with-http-info any?
  "Get Buy Now Server Options
  Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`."
  []
  (call-api "/servers/order/buy_now_server" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec buy-it-now-server-order buy-it-now-server-order-200-response-spec
  "Get Buy Now Server Options
  Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`."
  []
  (let [res (:data (buy-it-now-server-order-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode buy-it-now-server-order-200-response-spec res st/string-transformer)
       res)))


(defn-spec get-mp-servers-with-http-info any?
  "List Marketplace Servers
  Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase."
  []
  (call-api "/buy_now_servers_list" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-mp-servers buy-it-now-list-spec
  "List Marketplace Servers
  Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase."
  []
  (let [res (:data (get-mp-servers-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode buy-it-now-list-spec res st/string-transformer)
       res)))


(defn-spec get-new-server-with-http-info any?
  "Server Ordering Information
  Retrieves available server configurations and pricing for ordering a new dedicated server."
  []
  (call-api "/servers/order" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-new-server server-order-spec
  "Server Ordering Information
  Retrieves available server configurations and pricing for ordering a new dedicated server."
  []
  (let [res (:data (get-new-server-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode server-order-spec res st/string-transformer)
       res)))


(defn-spec get-server-info-with-http-info any?
  "Get Server Order
  Returns detailed information about a specific server including its hardware configuration, IPs, and status."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-server-info server-spec
  "Get Server Order
  Returns detailed information about a specific server including its hardware configuration, IPs, and status."
  [id int?]
  (let [res (:data (get-server-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode server-spec res st/string-transformer)
       res)))


(defn-spec get-server-invoices-with-http-info any?
  "Get Server Invoices
  Returns the billing invoices associated with this dedicated server."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}/invoices" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-server-invoices charge-invoice-rows-spec
  "Get Server Invoices
  Returns the billing invoices associated with this dedicated server."
  [id int?]
  (let [res (:data (get-server-invoices-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode charge-invoice-rows-spec res st/string-transformer)
       res)))


(defn-spec get-server-list-with-http-info any?
  "List Servers
  Returns all dedicated server services on the account with their current status and configuration."
  []
  (call-api "/servers" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-server-list (s/coll-of server-row-spec)
  "List Servers
  Returns all dedicated server services on the account with their current status and configuration."
  []
  (let [res (:data (get-server-list-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of server-row-spec) res st/string-transformer)
       res)))


(defn-spec get-server-reverse-dns-with-http-info any?
  "Reverse DNS Info
  Returns the current reverse DNS (PTR record) entries for the server's IP addresses."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}/reverse_dns" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-server-reverse-dns reverse-dns-entries-spec
  "Reverse DNS Info
  Returns the current reverse DNS (PTR record) entries for the server's IP addresses."
  [id int?]
  (let [res (:data (get-server-reverse-dns-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode reverse-dns-entries-spec res st/string-transformer)
       res)))


(defn-spec get-servers-welcome-email-with-http-info any?
  "Resend Server Welcome Email
  Resends the welcome email for the order."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}/welcome_email" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-servers-welcome-email success-text-response-spec
  "Resend Server Welcome Email
  Resends the welcome email for the order."
  [id int?]
  (let [res (:data (get-servers-welcome-email-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


(defn-spec place-buy-now-server-with-http-info any?
  "Place Buy Now Server Order
  Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering."
  ([] (place-buy-now-server-with-http-info nil))
  ([{:keys [place-buy-now-server-request]} (s/map-of keyword? any?)]
   (call-api "/servers/order/buy_now_server" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    place-buy-now-server-request
              :content-types ["application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec place-buy-now-server servers-buy-now-response-spec
  "Place Buy Now Server Order
  Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering."
  ([] (place-buy-now-server nil))
  ([optional-params any?]
   (let [res (:data (place-buy-now-server-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode servers-buy-now-response-spec res st/string-transformer)
        res))))


(defn-spec post-server-reverse-dns-with-http-info any?
  "Update Reverse DNS
  Updates the reverse DNS (PTR record) entries for the server's IP addresses."
  [id int?, reverse-dns-entries reverse-dns-entries]
  (check-required-params id reverse-dns-entries)
  (call-api "/servers/{id}/reverse_dns" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    reverse-dns-entries
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec post-server-reverse-dns text-response-spec
  "Update Reverse DNS
  Updates the reverse DNS (PTR record) entries for the server's IP addresses."
  [id int?, reverse-dns-entries reverse-dns-entries]
  (let [res (:data (post-server-reverse-dns-with-http-info id reverse-dns-entries))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec put-servers-with-http-info any?
  "Validate Server Order
  Validates a server order before placing it. Use this to check for errors before committing to a purchase."
  []
  (call-api "/servers/order" :put
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec put-servers any?
  "Validate Server Order
  Validates a server order before placing it. Use this to check for errors before committing to a purchase."
  []
  (let [res (:data (put-servers-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec server-ipmi-live-get-with-http-info any?
  "Server IPMI Live Information
  Returns the current IPMI live connection information for the server."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}/ipmi_live" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec server-ipmi-live-get server-ipmi-live-info-spec
  "Server IPMI Live Information
  Returns the current IPMI live connection information for the server."
  [id int?]
  (let [res (:data (server-ipmi-live-get-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode server-ipmi-live-info-spec res st/string-transformer)
       res)))


(defn-spec server-ipmi-live-post-with-http-info any?
  "Server IPMI Live Setup
  Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface."
  ([id int?, ip string?, ] (server-ipmi-live-post-with-http-info id ip nil))
  ([id int?, ip string?, {:keys [asset]} (s/map-of keyword? any?)]
   (check-required-params id ip)
   (call-api "/servers/{id}/ipmi_live" :post
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {}
              :form-params   {"asset" asset "ip" ip }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec server-ipmi-live-post server-ipmi-live-info-spec
  "Server IPMI Live Setup
  Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface."
  ([id int?, ip string?, ] (server-ipmi-live-post id ip nil))
  ([id int?, ip string?, optional-params any?]
   (let [res (:data (server-ipmi-live-post-with-http-info id ip optional-params))]
     (if (:decode-models *api-context*)
        (st/decode server-ipmi-live-info-spec res st/string-transformer)
        res))))


(defn-spec server-ipmi-power-get-with-http-info any?
  "Get IPMI Power Status
  Returns the chassis power status from ipmi."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}/ipmi_power" :get
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec server-ipmi-power-get text-response-spec
  "Get IPMI Power Status
  Returns the chassis power status from ipmi."
  [id int?]
  (let [res (:data (server-ipmi-power-get-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode text-response-spec res st/string-transformer)
       res)))


(defn-spec server-ipmi-power-post-with-http-info any?
  "Server IPMI Power
  Uses the IPMI interface to set the Power status on the server."
  ([id int?, action string?, ] (server-ipmi-power-post-with-http-info id action nil))
  ([id int?, action string?, {:keys [asset]} (s/map-of keyword? any?)]
   (check-required-params id action)
   (call-api "/servers/{id}/ipmi_power" :post
             {:path-params   {"id" id }
              :header-params {}
              :query-params  {}
              :form-params   {"asset" asset "action" action }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec server-ipmi-power-post text-response-spec
  "Server IPMI Power
  Uses the IPMI interface to set the Power status on the server."
  ([id int?, action string?, ] (server-ipmi-power-post id action nil))
  ([id int?, action string?, optional-params any?]
   (let [res (:data (server-ipmi-power-post-with-http-info id action optional-params))]
     (if (:decode-models *api-context*)
        (st/decode text-response-spec res st/string-transformer)
        res))))


(defn-spec servers-cancel-with-http-info any?
  "Cancel Server Service
  Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle."
  [id int?]
  (check-required-params id)
  (call-api "/servers/{id}" :delete
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec servers-cancel servers-cancel-200-response-spec
  "Cancel Server Service
  Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle."
  [id int?]
  (let [res (:data (servers-cancel-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode servers-cancel-200-response-spec res st/string-transformer)
       res)))


(defn-spec update-server-info-with-http-info any?
  "Update Server Order
  Updates settings on a dedicated server order."
  [id string?]
  (check-required-params id)
  (call-api "/servers/{id}" :post
            {:path-params   {"id" id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec update-server-info success-text-response-spec
  "Update Server Order
  Updates settings on a dedicated server order."
  [id string?]
  (let [res (:data (update-server-info-with-http-info id))]
    (if (:decode-models *api-context*)
       (st/decode success-text-response-spec res st/string-transformer)
       res)))


