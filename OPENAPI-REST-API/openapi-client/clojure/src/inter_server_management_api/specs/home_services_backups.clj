(ns inter-server-management-api.specs.home-services-backups
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-services-backups-data
  {
   (ds/opt :links) (s/coll-of string?)
   (ds/opt :count) int?
   })

(def home-services-backups-spec
  (ds/spec
    {:name ::home-services-backups
     :spec home-services-backups-data}))
