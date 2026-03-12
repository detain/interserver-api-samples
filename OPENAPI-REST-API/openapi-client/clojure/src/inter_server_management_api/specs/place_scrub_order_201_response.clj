(ns inter-server-management-api.specs.place-scrub-order-201-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.place-scrub-order-201-response-order-details :refer :all]
            )
  (:import (java.io File)))


(def place-scrub-order-201-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   (ds/opt :order_details) place-scrub-order-201-response-order-details-spec
   })

(def place-scrub-order-201-response-spec
  (ds/spec
    {:name ::place-scrub-order-201-response
     :spec place-scrub-order-201-response-data}))
