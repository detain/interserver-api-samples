(ns inter-server-management-api.specs.domain-dnssec-records
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-dnssec-records-data
  {
   })

(def domain-dnssec-records-spec
  (ds/spec
    {:name ::domain-dnssec-records
     :spec domain-dnssec-records-data}))
