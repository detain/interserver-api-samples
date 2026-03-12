(ns inter-server-management-api.specs.home
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-ticket-status :refer :all]
            [inter-server-management-api.specs.home-ticket-status-view :refer :all]
            [inter-server-management-api.specs.home-details :refer :all]
            [inter-server-management-api.specs.home-services :refer :all]
            )
  (:import (java.io File)))


(def home-data
  {
   (ds/req :last_login_ip) string?
   (ds/req :last_login) string?
   (ds/req :currency) string?
   (ds/req :amount) string?
   (ds/req :invoice_list) int?
   (ds/req :balance) string?
   (ds/req :full_name) string?
   (ds/req :email) string?
   (ds/req :tickets) (s/coll-of string?)
   (ds/req :ticketStatus) home-ticket-status-spec
   (ds/req :ticketStatusView) home-ticket-status-view-spec
   (ds/req :details) home-details-spec
   (ds/req :services) home-services-spec
   (ds/req :AFFILIATE_AMOUNT) string?
   })

(def home-spec
  (ds/spec
    {:name ::home
     :spec home-data}))
