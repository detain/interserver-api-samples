(ns inter-server-management-api.specs.place-scrub-order-201-response-order-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.place-scrub-order-201-response-order-details-cj-params :refer :all]
            )
  (:import (java.io File)))


(def place-scrub-order-201-response-order-details-data
  {
   (ds/opt :total_cost) int?
   (ds/opt :service_id) int?
   (ds/opt :invoice_id) int?
   (ds/opt :invoice_description) string?
   (ds/opt :cj_params) place-scrub-order-201-response-order-details-cj-params-spec
   })

(def place-scrub-order-201-response-order-details-spec
  (ds/spec
    {:name ::place-scrub-order-201-response-order-details
     :spec place-scrub-order-201-response-order-details-data}))
