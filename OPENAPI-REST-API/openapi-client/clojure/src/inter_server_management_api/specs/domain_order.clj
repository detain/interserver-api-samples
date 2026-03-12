(ns inter-server-management-api.specs.domain-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-order-services :refer :all]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def domain-order-data
  {
   (ds/opt :whoisPrivacyCost) string?
   (ds/opt :services) domain-order-services-spec
   (ds/opt :tldServices) any?
   })

(def domain-order-spec
  (ds/spec
    {:name ::domain-order
     :spec domain-order-data}))
