(ns inter-server-management-api.specs.domain-order-services
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-order-services10001 :refer :all]
            )
  (:import (java.io File)))


(def domain-order-services-data
  {
   (ds/opt :DomainOrderServices10001) domain-order-services10001-spec
   })

(def domain-order-services-spec
  (ds/spec
    {:name ::domain-order-services
     :spec domain-order-services-data}))
