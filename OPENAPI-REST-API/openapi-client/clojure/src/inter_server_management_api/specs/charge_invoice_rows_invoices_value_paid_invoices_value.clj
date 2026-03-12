(ns inter-server-management-api.specs.charge-invoice-rows-invoices-value-paid-invoices-value
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.charge-invoice-rows-invoices-value-paid-invoices-value-refund-invoices-value :refer :all]
            )
  (:import (java.io File)))


(def charge-invoice-rows-invoices-value-paid-invoices-value-data
  {
   (ds/opt :invoices_id) string?
   (ds/opt :invoices_description) string?
   (ds/opt :invoices_amount) float?
   (ds/opt :invoices_date) string?
   (ds/opt :invoices_currency) string?
   (ds/opt :currency_symbol) string?
   (ds/opt :invoices_date_formatted) string?
   (ds/opt :payment_type) string?
   (ds/opt :refund_invoices) (s/map-of string? charge-invoice-rows-invoices-value-paid-invoices-value-refund-invoices-value-spec)
   })

(def charge-invoice-rows-invoices-value-paid-invoices-value-spec
  (ds/spec
    {:name ::charge-invoice-rows-invoices-value-paid-invoices-value
     :spec charge-invoice-rows-invoices-value-paid-invoices-value-data}))
