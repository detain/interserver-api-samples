(ns inter-server-management-api.specs.domain-order-tld-services
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-order-tld-services-data
  {
   (ds/opt :asia) int?
   (ds/opt :be) int?
   (ds/opt :biz) int?
   (ds/opt :ca) int?
   })

(def domain-order-tld-services-spec
  (ds/spec
    {:name ::domain-order-tld-services
     :spec domain-order-tld-services-data}))
