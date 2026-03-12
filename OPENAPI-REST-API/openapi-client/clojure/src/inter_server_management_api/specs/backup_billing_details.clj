(ns inter-server-management-api.specs.backup-billing-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-billing-details-data
  {
   (ds/opt :service_last_invoice_date) string?
   (ds/opt :service_payment_status) string?
   (ds/opt :service_frequency) string?
   (ds/opt :next_date) string?
   (ds/opt :service_next_invoice_date) string?
   (ds/opt :service_currency) string?
   (ds/opt :service_currency_symbol) string?
   (ds/opt :service_cost_info) string?
   (ds/opt :service_extra) string?
   (ds/opt :service_extra_json) string?
   })

(def backup-billing-details-spec
  (ds/spec
    {:name ::backup-billing-details
     :spec backup-billing-details-data}))
