(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-billing-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-billing-details-data
  {
   (ds/opt :service_last_invoice_date) string?
   (ds/opt :service_payment_status) string?
   (ds/opt :service_frequency) string?
   (ds/opt :next_date) string?
   (ds/opt :service_next_invoice_date) string?
   (ds/opt :service_currency) string?
   (ds/opt :service_currency_symbol) string?
   (ds/opt :service_cost_info) string?
   })

(def get-scrub-ip-details-200-response-billing-details-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-billing-details
     :spec get-scrub-ip-details-200-response-billing-details-data}))
