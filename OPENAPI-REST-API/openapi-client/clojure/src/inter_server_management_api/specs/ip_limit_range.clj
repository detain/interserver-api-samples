(ns inter-server-management-api.specs.ip-limit-range
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ip-limit-range-data
  {
   (ds/req :start) string?
   (ds/req :end) string?
   })

(def ip-limit-range-spec
  (ds/spec
    {:name ::ip-limit-range
     :spec ip-limit-range-data}))
