(ns inter-server-management-api.specs.website-billing-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def website-billing-details-data
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
   (ds/opt :service_extra) any?
   (ds/opt :service_extra_json) string?
   })

(def website-billing-details-spec
  (ds/spec
    {:name ::website-billing-details
     :spec website-billing-details-data}))
