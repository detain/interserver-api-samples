(ns inter-server-management-api.specs.server-lease
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-lease-data
  {
   (ds/req :mac) string?
   (ds/req :authenticated) boolean?
   (ds/req :group) string?
   })

(def server-lease-spec
  (ds/spec
    {:name ::server-lease
     :spec server-lease-data}))
