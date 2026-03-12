(ns inter-server-management-api.specs.domain-dnssec-records-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-dnssec-records-inner-data
  {
   (ds/opt :algorithm) string?
   (ds/opt :digest_type) string?
   (ds/opt :digest) string?
   (ds/opt :key_tag) string?
   })

(def domain-dnssec-records-inner-spec
  (ds/spec
    {:name ::domain-dnssec-records-inner
     :spec domain-dnssec-records-inner-data}))
