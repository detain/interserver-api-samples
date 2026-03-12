(ns inter-server-management-api.specs.license-billing-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def license-billing-details-data
  {
   (ds/opt :service_last_invoice_date) string?
   (ds/opt :service_payment_status) string?
   (ds/opt :service_frequency) string?
   (ds/opt :next_date) inst?
   (ds/opt :service_next_invoice_date) string?
   (ds/opt :service_currency) string?
   (ds/opt :service_currency_symbol) string?
   (ds/opt :service_coupon) string?
   (ds/opt :service_cost_info) string?
   (ds/opt :service_extra) (s/coll-of string?)
   (ds/opt :service_extra_json) string?
   })

(def license-billing-details-spec
  (ds/spec
    {:name ::license-billing-details
     :spec license-billing-details-data}))
