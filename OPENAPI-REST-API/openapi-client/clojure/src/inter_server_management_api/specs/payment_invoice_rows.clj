(ns inter-server-management-api.specs.payment-invoice-rows
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def payment-invoice-rows-data
  {
   })

(def payment-invoice-rows-spec
  (ds/spec
    {:name ::payment-invoice-rows
     :spec payment-invoice-rows-data}))
