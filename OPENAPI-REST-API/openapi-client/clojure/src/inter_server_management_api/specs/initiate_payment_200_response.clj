(ns inter-server-management-api.specs.initiate-payment-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def initiate-payment-200-response-data
  {
   (ds/opt :type) string?
   (ds/opt :redirect) string?
   (ds/opt :action) string?
   (ds/opt :method) string?
   (ds/opt :items) any?
   (ds/opt :text) string?
   })

(def initiate-payment-200-response-spec
  (ds/spec
    {:name ::initiate-payment-200-response
     :spec initiate-payment-200-response-data}))
