(ns inter-server-management-api.specs.charge-invoice-rows
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.charge-invoice-rows-invoices-value :refer :all]
            )
  (:import (java.io File)))


(def charge-invoice-rows-data
  {
   (ds/opt :success) boolean?
   (ds/opt :invoices) (s/map-of string? charge-invoice-rows-invoices-value-spec)
   })

(def charge-invoice-rows-spec
  (ds/spec
    {:name ::charge-invoice-rows
     :spec charge-invoice-rows-data}))
