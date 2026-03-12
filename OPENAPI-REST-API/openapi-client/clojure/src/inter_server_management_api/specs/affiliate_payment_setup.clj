(ns inter-server-management-api.specs.affiliate-payment-setup
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def affiliate-payment-setup-data
  {
   (ds/opt :affiliate_paypal) string?
   (ds/opt :affiliate_payment_method) string?
   })

(def affiliate-payment-setup-spec
  (ds/spec
    {:name ::affiliate-payment-setup
     :spec affiliate-payment-setup-data}))
