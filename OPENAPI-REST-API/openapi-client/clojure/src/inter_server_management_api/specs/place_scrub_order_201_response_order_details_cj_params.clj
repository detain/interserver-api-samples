(ns inter-server-management-api.specs.place-scrub-order-201-response-order-details-cj-params
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def place-scrub-order-201-response-order-details-cj-params-data
  {
   (ds/opt :containerTagId) int?
   (ds/opt :CID) int?
   (ds/opt :OID) string?
   (ds/opt :TYPE) int?
   (ds/opt :ITEM1) string?
   (ds/opt :AMT1) int?
   (ds/opt :QTY1) int?
   (ds/opt :CURRENCY) string?
   })

(def place-scrub-order-201-response-order-details-cj-params-spec
  (ds/spec
    {:name ::place-scrub-order-201-response-order-details-cj-params
     :spec place-scrub-order-201-response-order-details-cj-params-data}))
