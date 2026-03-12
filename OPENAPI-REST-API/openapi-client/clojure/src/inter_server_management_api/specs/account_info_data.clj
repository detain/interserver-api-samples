(ns inter-server-management-api.specs.account-info-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.account-info-data-ccs :refer :all]
            [inter-server-management-api.specs.account-info-data-email-settings :refer :all]
            [inter-server-management-api.specs.account-info-data-extra :refer :all]
            [inter-server-management-api.specs.account-info-data-fraudrecord :refer :all]
            [inter-server-management-api.specs.account-info-max-mind-response :refer :all]
            )
  (:import (java.io File)))


(def account-info-data-data
  {
   (ds/opt :group) string?
   (ds/opt :address) string?
   (ds/opt :city) string?
   (ds/opt :country) string?
   (ds/opt :disable_cc) string?
   (ds/opt :fraudrecord_score) string?
   (ds/opt :ima) string?
   (ds/opt :name) string?
   (ds/opt :payment_method) string?
   (ds/opt :phone) string?
   (ds/opt :pin) string?
   (ds/opt :state) string?
   (ds/opt :status) string?
   (ds/opt :zip) string?
   (ds/opt :account_id) string?
   (ds/opt :account_lid) string?
   (ds/opt :address2) string?
   (ds/opt :affiliate_dock_description) string?
   (ds/opt :affiliate_dock_title) string?
   (ds/opt :affiliate_payment_method) string?
   (ds/opt :affiliate_paypal) string?
   (ds/opt :cc) string?
   (ds/opt :cc_auto) string?
   (ds/opt :cc_exp) string?
   (ds/opt :cc_type) string?
   (ds/opt :cc_whitelist) string?
   (ds/opt :ccs) account-info-data-ccs-spec
   (ds/opt :ccs_added) string?
   (ds/opt :company) string?
   (ds/opt :currency) string?
   (ds/opt :disable_reinstall) string?
   (ds/opt :disable_reset) string?
   (ds/opt :email) string?
   (ds/opt :email_abuse) string?
   (ds/opt :email_settings) account-info-data-email-settings-spec
   (ds/opt :extra) account-info-data-extra-spec
   (ds/opt :facebook_id) string?
   (ds/opt :facebook_url) string?
   (ds/opt :firstname) string?
   (ds/opt :fraudrecord) account-info-data-fraudrecord-spec
   (ds/opt :github_id) string?
   (ds/opt :github_url) string?
   (ds/opt :google_id) string?
   (ds/opt :google_url) string?
   (ds/opt :innertell_id) string?
   (ds/opt :lastname) string?
   (ds/opt :locale) string?
   (ds/opt :maxmind) account-info-max-mind-response-spec
   (ds/opt :maxmind_score) string?
   (ds/opt :mb_id) string?
   (ds/opt :modernbill_id) string?
   (ds/opt :picture) string?
   (ds/opt :referrer_coupon) string?
   (ds/opt :reseller_markup) string?
   (ds/opt :username) string?
   (ds/opt :ssh_key) string?
   (ds/opt :ssh_key_wrapped) string?
   (ds/opt :api_key) string?
   (ds/opt :api_key_wrapped) string?
   (ds/opt :2fa_google_key) string?
   (ds/opt :2fa_google_enabled) boolean?
   (ds/opt :2fa_google) int?
   (ds/opt :2fa_google_split) string?
   (ds/opt :2fa_google_qr) string?
   })

(def account-info-data-spec
  (ds/spec
    {:name ::account-info-data
     :spec account-info-data-data}))
