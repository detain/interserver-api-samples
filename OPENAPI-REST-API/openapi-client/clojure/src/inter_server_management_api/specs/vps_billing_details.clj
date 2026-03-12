(ns inter-server-management-api.specs.vps-billing-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-service-extra :refer :all]
            )
  (:import (java.io File)))


(def vps-billing-details-data
  {
   (ds/opt :service_last_invoice_date) string?
   (ds/opt :service_payment_status) string?
   (ds/opt :service_frequency) string?
   (ds/opt :next_date) string?
   (ds/opt :service_next_invoice_date) string?
   (ds/opt :service_currency) string?
   (ds/opt :service_currency_symbol) string?
   (ds/opt :service_coupon) string?
   (ds/opt :service_cost_info) string?
   (ds/opt :service_extra) vps-service-extra-spec
   (ds/opt :service_extra_json) string?
   })

(def vps-billing-details-spec
  (ds/spec
    {:name ::vps-billing-details
     :spec vps-billing-details-data}))
