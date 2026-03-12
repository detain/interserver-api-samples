(ns inter-server-management-api.specs.domain-billing-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-billing-extra :refer :all]
            )
  (:import (java.io File)))


(def domain-billing-details-data
  {
   (ds/opt :service_last_invoice_date) string?
   (ds/opt :service_payment_status) string?
   (ds/opt :service_frequency) string?
   (ds/opt :next_date) string?
   (ds/opt :service_next_invoice_date) string?
   (ds/opt :service_currency) string?
   (ds/opt :service_currency_symbol) string?
   (ds/opt :service_cost_info) string?
   (ds/opt :service_extra) domain-billing-extra-spec
   (ds/opt :service_extra_json) string?
   })

(def domain-billing-details-spec
  (ds/spec
    {:name ::domain-billing-details
     :spec domain-billing-details-data}))
