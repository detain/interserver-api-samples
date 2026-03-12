(ns inter-server-management-api.specs.account-info-post
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-post-data
  {
   (ds/req :name) string?
   (ds/req :address) string?
   (ds/req :city) string?
   (ds/req :state) string?
   (ds/req :zip) string?
   (ds/req :country) string?
   (ds/req :phone) string?
   (ds/opt :company) string?
   (ds/opt :address2) string?
   (ds/opt :locale) string?
   (ds/opt :email_invoices) string?
   (ds/opt :email_abuse) string?
   (ds/opt :disable_reset) boolean?
   (ds/opt :disable_reinstall) boolean?
   (ds/opt :disable_server_notifications) boolean?
   (ds/opt :disable_email_notifications) boolean?
   (ds/opt :gstin) string?
   })

(def account-info-post-spec
  (ds/spec
    {:name ::account-info-post
     :spec account-info-post-data}))
