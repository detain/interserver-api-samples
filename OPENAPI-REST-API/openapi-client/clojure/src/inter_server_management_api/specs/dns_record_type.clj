(ns inter-server-management-api.specs.dns-record-type
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def dns-record-type-data
  {
   })

(def dns-record-type-spec
  (ds/spec
    {:name ::dns-record-type
     :spec dns-record-type-data}))
