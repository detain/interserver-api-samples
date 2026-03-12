(ns inter-server-management-api.specs.domain-order-response-attributes
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-order-response-attributes-data
  {
   (ds/opt :id) string?
   (ds/opt :admin_email) string?
   })

(def domain-order-response-attributes-spec
  (ds/spec
    {:name ::domain-order-response-attributes
     :spec domain-order-response-attributes-data}))
