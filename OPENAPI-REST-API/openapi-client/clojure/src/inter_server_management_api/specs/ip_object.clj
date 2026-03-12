(ns inter-server-management-api.specs.ip-object
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ip-object-data
  {
   (ds/req :ip) string?
   })

(def ip-object-spec
  (ds/spec
    {:name ::ip-object
     :spec ip-object-data}))
