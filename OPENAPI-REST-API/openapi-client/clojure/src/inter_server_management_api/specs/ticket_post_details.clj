(ns inter-server-management-api.specs.ticket-post-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ticket-post-details-data
  {
   })

(def ticket-post-details-spec
  (ds/spec
    {:name ::ticket-post-details
     :spec ticket-post-details-data}))
