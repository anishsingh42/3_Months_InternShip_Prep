# Write your MySQL query statement below
#Truncate table delete the table content but not the table 

#https://leetcode.com/problems/combine-two-tables/?envType=list&envId=e97a9e5m

SELECT p.firstName, p.lastName, a.city, a.state 
FROM Person p LEFT JOIN Address a
ON( p.personId = a.personId )

#Left join because we have to include the everyone in person table even if that doesnot exist in address table