(ns inter-server-management-api.specs.domain-order-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-order-response-attributes :refer :all]
            )
  (:import (java.io File)))


(def domain-order-response-data
  {
   (ds/opt :_OPS_version) string?
   (ds/opt :protocol) string?
   (ds/opt :is_success) string?
   (ds/opt :action) string?
   (ds/opt :attributes) domain-order-response-attributes-spec
   (ds/opt :response_text) string?
   (ds/opt :object) string?
   (ds/opt :response_code) string?
   })

(def domain-order-response-spec
  (ds/spec
    {:name ::domain-order-response
     :spec domain-order-response-data}))
