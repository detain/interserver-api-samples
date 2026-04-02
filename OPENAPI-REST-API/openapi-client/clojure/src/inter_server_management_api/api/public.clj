(ns inter-server-management-api.api.public
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


(defn-spec get-captcha-with-http-info any?
  "Get Captcha Challenge
  Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint."
  []
  (call-api "/captcha" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-captcha captcha-response-spec
  "Get Captcha Challenge
  Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint."
  []
  (let [res (:data (get-captcha-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode captcha-response-spec res st/string-transformer)
       res)))


(defn-spec get-countries-with-http-info any?
  "Get Countries
  Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms."
  ([] (get-countries-with-http-info nil))
  ([{:keys [fetch_by]} (s/map-of keyword? any?)]
   (call-api "/account/countries" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"fetch_by" fetch_by }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec get-countries any?
  "Get Countries
  Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms."
  ([] (get-countries nil))
  ([optional-params any?]
   (let [res (:data (get-countries-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


(defn-spec get-info-with-http-info any?
  "Get Server Info
  Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders."
  []
  (call-api "/info" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-info services-info-spec
  "Get Server Info
  Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders."
  []
  (let [res (:data (get-info-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode services-info-spec res st/string-transformer)
       res)))


(defn-spec get-login-info-with-http-info any?
  "Get Login Info
  Gets the various pieces of information useful for generating a login page."
  []
  (call-api "/login" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-login-info login-info-spec
  "Get Login Info
  Gets the various pieces of information useful for generating a login page."
  []
  (let [res (:data (get-login-info-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode login-info-spec res st/string-transformer)
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


(defn-spec get-oauth-redirect-with-http-info any?
  "Get OAuth Redirect URL
  Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`."
  [provider string?]
  (check-required-params provider)
  (call-api "/oauth" :get
            {:path-params   {}
             :header-params {}
             :query-params  {"provider" provider }
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-oauth-redirect get-oauth-redirect-200-response-spec
  "Get OAuth Redirect URL
  Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`."
  [provider string?]
  (let [res (:data (get-oauth-redirect-with-http-info provider))]
    (if (:decode-models *api-context*)
       (st/decode get-oauth-redirect-200-response-spec res st/string-transformer)
       res)))


(defn-spec get-timezones-with-http-info any?
  "Get Available Timezones
  Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`."
  []
  (call-api "/account/timezones" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec get-timezones (s/coll-of string?)
  "Get Available Timezones
  Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`."
  []
  (let [res (:data (get-timezones-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of string?) res st/string-transformer)
       res)))


(defn-spec patch-oauth-two-factor-with-http-info any?
  "Complete OAuth Two-Factor Verification
  Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`."
  [patch-oauth-two-factor-request patch-oauth-two-factor-request]
  (check-required-params patch-oauth-two-factor-request)
  (call-api "/oauth" :patch
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :body-param    patch-oauth-two-factor-request
             :content-types ["application/json" "multipart/form-data"]
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec patch-oauth-two-factor patch-oauth-two-factor-200-response-spec
  "Complete OAuth Two-Factor Verification
  Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`."
  [patch-oauth-two-factor-request patch-oauth-two-factor-request]
  (let [res (:data (patch-oauth-two-factor-with-http-info patch-oauth-two-factor-request))]
    (if (:decode-models *api-context*)
       (st/decode patch-oauth-two-factor-200-response-spec res st/string-transformer)
       res)))


(defn-spec ping-server-with-http-info any?
  "Ping Server
  Performs a single ping/pong request to let you know if the server is up."
  []
  (call-api "/ping" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]}))

(defn-spec ping-server string?
  "Ping Server
  Performs a single ping/pong request to let you know if the server is up."
  []
  (let [res (:data (ping-server-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode string? res st/string-transformer)
       res)))


(defn-spec post-oauth-callback-with-http-info any?
  "OAuth Callback
  Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login."
  ([provider string?, ] (post-oauth-callback-with-http-info provider nil))
  ([provider string?, {:keys [post-oauth-callback-request]} (s/map-of keyword? any?)]
   (check-required-params provider)
   (call-api "/oauth" :post
             {:path-params   {}
              :header-params {}
              :query-params  {"provider" provider }
              :form-params   {}
              :body-param    post-oauth-callback-request
              :content-types ["application/json" "multipart/form-data"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec post-oauth-callback post-oauth-callback-200-response-spec
  "OAuth Callback
  Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login."
  ([provider string?, ] (post-oauth-callback provider nil))
  ([provider string?, optional-params any?]
   (let [res (:data (post-oauth-callback-with-http-info provider optional-params))]
     (if (:decode-models *api-context*)
        (st/decode post-oauth-callback-200-response-spec res st/string-transformer)
        res))))


(defn-spec submit-login-with-http-info any?
  "Submit Login Information
  Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned."
  ([login string?, passwd string?, ] (submit-login-with-http-info login passwd nil))
  ([login string?, passwd string?, {:keys [remember g-recaptcha-response tfa]} (s/map-of keyword? any?)]
   (check-required-params login passwd)
   (call-api "/login" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {"login" login "passwd" passwd "remember" remember "g-recaptcha-response" g-recaptcha-response "tfa" tfa }
              :content-types ["multipart/form-data" "application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec submit-login login-success-response-spec
  "Submit Login Information
  Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned."
  ([login string?, passwd string?, ] (submit-login login passwd nil))
  ([login string?, passwd string?, optional-params any?]
   (let [res (:data (submit-login-with-http-info login passwd optional-params))]
     (if (:decode-models *api-context*)
        (st/decode login-success-response-spec res st/string-transformer)
        res))))


(defn-spec submit-signup-with-http-info any?
  "Submit Signup Information
  Creates a new account in our system using the provided information."
  ([] (submit-signup-with-http-info nil))
  ([{:keys [login-submission-example]} (s/map-of keyword? any?)]
   (call-api "/signup" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    login-submission-example
              :content-types ["application/json"]
              :accepts       ["application/json"]
              :auth-names    ["sessionIdCookieAuth" "apiKeyAuth" "sessionIdHeaderAuth"]})))

(defn-spec submit-signup any?
  "Submit Signup Information
  Creates a new account in our system using the provided information."
  ([] (submit-signup nil))
  ([optional-params any?]
   (let [res (:data (submit-signup-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode any? res st/string-transformer)
        res))))


