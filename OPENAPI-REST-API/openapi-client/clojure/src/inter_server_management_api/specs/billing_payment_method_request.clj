(ns inter-server-management-api.specs.billing-payment-method-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def billing-payment-method-request-data
  {
   (ds/opt :payment_method) string?
   (ds/opt :cc_auto) string?
   })

(def billing-payment-method-request-spec
  (ds/spec
    {:name ::billing-payment-method-request
     :spec billing-payment-method-request-data}))
